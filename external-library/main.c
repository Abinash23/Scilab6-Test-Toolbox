#include <stdio.h>
#include <stdlib.h>
#include "trans.c"
#include "trans.h"

int main()
{
	int n, m;
	printf("Enter number of rows(n) and columns(m): ");
	scanf("%d%d", &n, &m);
	double **matrix = (double **)malloc(n*sizeof(double*));
	for(int i=0;i<n;i++){
		matrix[i] = (double*)malloc(m*sizeof(double));
	}
	double **result = (double **)malloc(m*sizeof(double*));
	for(int i=0;i<m;i++){
		result[i] = (double *)malloc(n*sizeof(double));
	}
	printf("Enter the elements of matrix\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			double ele;
			printf("Enter (%d, %d) element: ", i+1, j+1);
			scanf("%lf", &ele);
			matrix[i][j] = ele;
		}
	}
	printf("Given Matrix\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%lf ", matrix[i][j]);
		}
		printf("\n");
	}
	trans(result, matrix, n, m);
	printf("Transpose Matrix\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%lf ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
