#include<stdio.h>
#include<stdlib.h>
#include"matrix.h"

float **create(int m, int n)
{
	int i;
	float **temp;
	temp = (float**) malloc(m*sizeof(float*));
	if (temp == NULL)
		{
			printf("Memory Error!");
			exit(1);
		}
	for (i=0; i<m; i++)
		{
			temp[i] = (float*)malloc(n*sizeof(float));
		}

	return temp;
}

float **fill(int m, int n,float **mat)
{
	int i,j;
	for(i = 0; i<m; i++)
		{
			printf("Enter the %d line: ", i);
				for(j = 0; j<n; j++)
					{
						scanf("%f", &mat[i][j]);
					}
		}
	return mat;
}


void print_mat(int m, int n, float** mat)
{
	int i,j;
	for(i = 0; i<m; i++)
		{
			for (j = 0; j<n; j++)
				{
					printf("%.2f ", mat[i][j]);
				}
			printf("\n");
		}
	
}

float **realloc_row_column(int m, float** mat, int extra)
{
	int i;
	mat = (float**) realloc(mat,extra);
	
	for (i=m; i<extra; i++)
		{
			mat[i] = (float*)malloc(extra*sizeof(float));
		}

	return mat;
}
