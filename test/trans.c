#include <stdio.h>

int transpose(int r, int c, float matrix[][c], float transMat[][r]){
// transpose function that allows to transpose the given matrix
// For example, given matrix 2x3 then the transpose matrix is transMat 3x2
//
//				{{1.2, 1.0, 4.3}, 
//	matrix[2][3]	 =	{3.1, 4.8, 8.0}} 
//
//	transMat[3][2]	=	{{1.2, 3.1},
//				{1.0, 4.8},
//				{4.3, 8.0}}
	for(int i = 0;i<c;i++){
		for(int j = 0; j<r;j++){
			transMat[i][j] = matrix[j][i];
		}
	}
}
