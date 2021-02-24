#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int trans(double **result, double **matrix, int n, int m)
{
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			result[j][i] = matrix[i][j];
		}
	}
    return 0;
}
