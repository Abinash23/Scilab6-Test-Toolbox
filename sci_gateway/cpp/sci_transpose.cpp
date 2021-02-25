extern "C"
{
	#include "Scierror.h"
	#include "api_scilab.h"
	#include <stdio.h>
	#include <stdlib.h>
	#include "localization.h"
	#include "trans.h"
	static const char fname[] = "transpose";
	int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out){
		int inr = 0; // number of rows
		int inc = 0; // number of columns
		double *in1 = NULL;
		double *out1 = NULL;
		double **matrix = NULL;
		double **result = NULL;
		int dim = 0; // size of matrix
		int k = 0;
		// check if number of input argument(s) are not equal to 1
		if (nin != 1){
			Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
			return 1;
		}
		// check if number of output argument(s) are not equal to 1
		if (nout != 1){
			Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
			return 1;
		}
		// check if given input is a matrix
		if (scilab_isMatrix2d(env, in[0]) == 0){
			Scierror(999, _("%s: Wrong type of input arguments: Matrix expected.\n"), fname);
			return 1;
		}
		// check if given input is empty
		if (scilab_isEmpty(env, in[0]) == 1){
			Scierror(999, _("%s: Wrong type of input arguments: A non empty matrix expected.\n"), fname);
			return 1;
		}
		dim = scilab_getDim2d(env, in[0], &inr, &inc);
		scilab_getDoubleArray(env, in[0], &in1);
		// scilab_createDoubleMatrix2d is used to create a matrix of datatype Double
		out[0] = scilab_createDoubleMatrix2d(env, inc, inr, 0);
		scilab_getDoubleArray(env, out[0], &out1);
		matrix = (double **)malloc(inr*sizeof(double*));
		for(int i =0;i<inr;i++){
			matrix[i] = (double *)malloc(inc*sizeof(double));
		}
		result = (double **)malloc(inc*sizeof(double*));
		for(int i =0;i<inc;i++){
			result[i] = (double *)malloc(inr*sizeof(double));
		}
		for(int i = 0;i<inc;i++){
			for(int j = 0;j<inr;j++){
				matrix[j][i] = in1[k++];
			}
		}
		// calling trans function
		trans(result, matrix, inr, inc);
		k = 0;
		for(int i=0;i<inr;i++){
			for(int j=0;j<inc;j++){
				out1[k++] = result[j][i];
			}
		}
		return 0;
	}
}
