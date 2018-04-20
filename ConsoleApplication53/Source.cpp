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
	printf("выберите задание");
	scanf("%d", &N);
	switch (N)
	{
	case 1:
	{
		//1.	В заданной строке заменить каждый символ строки следующим по коду символом.Букву «я» заменить пробелом.
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		AtoI(pt,strlen(pt));
		puts(pt);
		free(pt);
	}
		break;
	case 2:
	{
		//2.	В заданной строке посчитать количество разных символов, входящих в эту строку
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		CountS(pt, 10);
		free(pt);
	}
	break;
	case 3:
	{
		/*3.	В заданной строке расположить в обратном порядке все слова. Разделителями слов считаются пробелы*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 50);
		if (pt == NULL)
			exit(0);

		char* pt2 = NULL;
		pt2 = (char*)calloc(sizeof(char), 50);
		if (pt2 == NULL)
			exit(0);
		int i=0;
		printf("введите слова");
		scanf("%s", pt);
		zToA(pt, pt2, strlen(pt));
		puts(pt2);

	}
	break;
	case 4:
	{
		/*4.	В заданной строке посчитать количество слов, содержащих только строчные русские буквы. Разделителями слов считаются пробелы.*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 10);
		if (pt == NULL)
			exit(0);
		printf("введите слова");
		scanf("%s", pt);
		count(pt, 10);
	}
	break;
	case 5:
	{
		/*5.	По заданной строке получить массив слов, входящих в эту строку. Разделителями слов считаются пробелы.*/
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
		/*6.	Дан массив символов. Подсчитать, сколько различных символов встречается в нем. Вывести их на экран*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		CountS(pt, 10);
		free(pt);
	}
	break;
	case 7:
	{
		//7.	Дан массив символов.Подсчитать самую длинную последовательность подряд идущих букв а.
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		CountA(pt, 10);
		free(pt);
	}
	break;
	case 8:
	{
		/*8.	Дан массив символов, среди которых есть открывающиеся и закрывающиеся скобки. Вывести на экран массивы символов, расположенные внутри этих скобок.*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		OpenK(pt, 10);
		free(pt);
	}
	break;
	case 9:
	{
		//*9.	Дан массив символов, содержащий текст.Определить процентное отношение строчных и прописных букв к общему числу символов в нем.
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		avsA(pt, 11);
		free(pt);
	}
	break;
	case 10:
	{
		/*10.	Дан массив символов, среди которых есть одна открывающаяся и одна закрывающаяся скобка. Вывести на экран все символы, расположенные внутри этих скобок*/
		char* pt = NULL;
		pt = (char*)calloc(sizeof(char), 11);
		if (pt == NULL)
			exit(0);
		printf("введите 10символов");
		scanf("%s", pt);
		OpenKprint(pt, 10);
		free(pt);
	}
	break;
	}
}