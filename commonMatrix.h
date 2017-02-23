#ifndef _COMMON_MATRIX_H_
#define _COMMON_MATRIX_H_

#include<malloc.h>

typedef unsigned char boolean;

typedef struct MATRIX{
	USER_TYPE *data;
	int maxRow;
	int maxCol;
}MATRIX;

#define TRUE	1
#define	FALSE	0

void initMatrix(MATRIX **matrixHead, int maxRow, int maxCol);
void destoryMatrix(MATRIX **matrixHead);
boolean setElementAt(MATRIX matrix, int row, int col, USER_TYPE value);
boolean getElementAt(MATRIX matrix, int row, int col, USER_TYPE *value);

boolean getElementAt(MATRIX matrix, int row, int col, USER_TYPE *value){
	if(row < 0 || col < 0 || row >= matrix.maxRow || col >= matrix.maxCol){
		return FALSE;
	}

	*value = matrix.data[row*matrix.maxCol + col];

	return TRUE;
}

boolean setElementAt(MATRIX matrix, int row, int col, USER_TYPE value){
	if(row < 0 || col < 0 || row >= matrix.maxRow || col >= matrix.maxCol){
		return FALSE;
	}

	matrix.data[row*matrix.maxCol + col] = value;

	return TRUE;
}


void destoryMatrix(MATRIX **matrixHead){
	if(*matrixHead == NULL){
		return;
	}

	if((*matrixHead)->data != NULL){
		free((*matrixHead)->data);
	}
	free(*matrixHead);
	*matrixHead = NULL;

}

void initMatrix(MATRIX **matrixHead, int maxRow, int maxCol){
	MATRIX *matrix = NULL;

	if(*matrixHead != NULL || maxRow <= 0 || maxCol <= 0){
		return;
	}

	matrix = (MATRIX *)calloc(sizeof(MATRIX), 1);
	matrix->maxRow = maxRow;
	matrix->maxCol = maxCol;

	matrix->data = (USER_TYPE *)calloc(sizeof(USER_TYPE), maxRow * maxCol);

	*matrixHead = matrix;
}

#endif