#include<stdio.h> 
#include<stdlib.h>
#include"matrix.h"

int main(){
	int m,n,i;
	float **mat;
	printf("\nType the size of the matrix: ");
	scanf("%d %d", &m,&n);
	mat = create(m,n);
	mat = fill(m,n,mat);
	print_mat(m,n,mat);

}
