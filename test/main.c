#include <stdio.h>
#include "trans.c"

int main(){
	//Getting the size of matrix
	int n, m;
	printf("Enter number of row and columns: ");
	scanf("%d%d", &n, &m);
	float matrix[n][m];
	// initialize the matrix that need to transpose
	for(int i=0;i<n;i++){
		for(int j = 0;j<m;j++){
			printf("Enter matrix(%d, %d) element: ", i+1, j+1);
			scanf("%f", &matrix[i][j]);
		}
	}
	// Displaying given matrix
	printf("\nGiven matrix \n");
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			printf("%.1f ", matrix[i][j]);
		}
		printf("\n");
	}
	float transMat[m][n];
	// calling transpose function
	transpose(n, m, matrix, transMat);
	// Displaying the transpose matrix
	printf("\nTranspose Matrix \n");
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			printf("%.1f ", transMat[i][j]);
		}
		printf("\n");
	}	
}
