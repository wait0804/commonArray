#include<stdio.h>

typedef int USER_TYPE; //�û��Զ�����������
//�������ݽṹ���㷨��˼��,������ͨ�ö�ά����Ĺ���,���Աܿ���ά�����С��г��Ȳ���������
#include"./commonMatrix.h"

void main(void){
	MATRIX *matrix = NULL;
	int maxRow;
	int maxCol;
	int value;

	printf("�������ά������С���: ");
	scanf("%d%d", &maxRow, &maxCol);
	initMatrix(&matrix, maxRow, maxCol); 
	setElementAt(*matrix, 1, 1, 2); //�û������Լ�����ʱ���
	getElementAt(*matrix, 1, 1, &value); //�û������Լ�����ʱ���

	printf("matrix[1][1] = %d\n", value);

	destoryMatrix(&matrix);


}