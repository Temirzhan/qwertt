#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"Header.h"


char f;
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int N;
	printf("�������� �������");
	scanf("%d", &N);
	switch (N)
	{
	case 1:
	{
		//1.	� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������.����� ��� �������� ��������.
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		AtoI(pt,strlen(pt));
		puts(pt);
		free(pt);
	}
		break;
	case 2:
	{
		//2.	� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		CountS(pt, 10);
		free(pt);
	}
	break;
	case 3:
	{
		/*3.	� �������� ������ ����������� � �������� ������� ��� �����. ������������� ���� ��������� �������*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 50);
		if (pt == NULL)
			exit(0);

		char* pt2 = NULL;
		pt2 = (char*)calloc(sizeof(char), 50);
		if (pt2 == NULL)
			exit(0);
		int i=0;
		printf("������� �����");
		scanf("%s", pt);
		zToA(pt, pt2, strlen(pt));
		puts(pt2);

	}
	break;
	case 4:
	{
		/*4.	� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����. ������������� ���� ��������� �������.*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 10);
		if (pt == NULL)
			exit(0);
		printf("������� �����");
		scanf("%s", pt);
		count(pt, 10);
	}
	break;
	case 5:
	{
		/*5.	�� �������� ������ �������� ������ ����, �������� � ��� ������. ������������� ���� ��������� �������.*/
		char pt[] = "vfcc das fdsf adsg  hrt";
		int N=Prob(pt, strlen(pt));
		char *pt2 = NULL;
		pt2 = (char*)calloc(sizeof(char), N*20);
		if (pt2 == NULL)
			exit(0);
		TextMAs(pt, pt2, 20, strlen(pt));
		printMAss(pt2, 20);
	}
	break;
	case 6:
	{
		/*6.	��� ������ ��������. ����������, ������� ��������� �������� ����������� � ���. ������� �� �� �����*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		CountS(pt, 10);
		free(pt);
	}
	break;
	case 7:
	{
		//7.	��� ������ ��������.���������� ����� ������� ������������������ ������ ������ ���� �.
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		CountA(pt, 10);
		free(pt);
	}
	break;
	case 8:
	{
		/*8.	��� ������ ��������, ����� ������� ���� ������������� � ������������� ������. ������� �� ����� ������� ��������, ������������� ������ ���� ������.*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		OpenK(pt, 10);
		free(pt);
	}
	break;
	case 9:
	{
		//*9.	��� ������ ��������, ���������� �����.���������� ���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ���.
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		avsA(pt, 11);
		free(pt);
	}
	break;
	case 10:
	{
		/*10.	��� ������ ��������, ����� ������� ���� ���� ������������� � ���� ������������� ������. ������� �� ����� ��� �������, ������������� ������ ���� ������*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("������� 10��������");
		scanf("%s", pt);
		OpenKprint(pt, 10);
		free(pt);
	}
	break;
	}
}