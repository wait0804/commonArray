#include<stdio.h>

typedef int USER_TYPE; //用户自定义数据类型
//利用数据结构与算法的思想,做出了通用二维数组的工具,可以避开二维数组行、列长度不定的问题
#include"./commonMatrix.h"

void main(void){
	MATRIX *matrix = NULL;
	int maxRow;
	int maxCol;
	int value;

	printf("请输入二维数组的行、列: ");
	scanf("%d%d", &maxRow, &maxCol);
	initMatrix(&matrix, maxRow, maxCol); 
	setElementAt(*matrix, 1, 1, 2); //用户的做自己返回时检测
	getElementAt(*matrix, 1, 1, &value); //用户的做自己返回时检测

	printf("matrix[1][1] = %d\n", value);

	destoryMatrix(&matrix);


}