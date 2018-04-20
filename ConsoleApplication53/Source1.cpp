#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>



void AtoI(char *pt,int len)
{
	int p;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) != '0');
		{
			if ((int)(*(pt + i)) == 255)
			{
				*(pt + i) = ' ';
			}
			else
			{
				p = ((int)(*(pt + i))) + 1;
				*(pt + i) = (char)p;
			}

		}
	}
}

void CountS(char *pt, int len)
{
	int flag = 0;
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		flag = 0;
		for (int j = 0; j < len; j++)
		{
			if (i != j)
			{
				if ((*(pt+i)) ==( *(pt+j)))
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
			count++;
	}
	printf("колличество символов %d\n", count);
}


void zToA(char *pt, char *pt2, int len)
{
	for (int i = len-1,j=0; i > 0;j++, i--)
	{
		*(pt2 + j) = *(pt + i);
	}
}

void count(char *pt,int len)
{
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if ((int)*(pt + i) > 97 && (int)*(pt + i) < 123)
		{
			count++;
		}
	}
	printf("%d\n", count);
}


int Prob(char *p, int lrn)
{
	int counr=1;
	for (int i = 0; i < lrn; i++)
	{
		if (*(p+i) ==' ')
		counr++;
	}
	return counr;
}

void TextMAs(char *pt, char *pt2, int len,int len2)
{
	int j = 0;
	int f = 0;
	for(int i=0;i<len2;i++)
	{
		if (*(pt + i) != ' ')
		{
			*(pt2 + j*len + f) = *(pt + i);
			f++;
		}
		else
		{
			*(pt2 + j*len + f) = '\0';
			f = 0;
			j++;
		}
	}
}

void printMAss(char *pt, int len)
{
	for (size_t i = 0; i < 5; i++)
	{
		puts((pt + i*len));
	}
}
void CountA(char *pt, int len)
{
	int count = 0, max = 0;
	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) == 'a')
		{
			count++;
		}
		else
		{
			if (max < count)
				max = count;
			count = 0;
		}
	}
	printf("%d\n", max);
}
void OpenK(char *pt, int len)
{
	int count = -1, flag = 0;


	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) == ')')
		{
			flag = 0;
		}
		if (*(pt + i) == '('||flag==1)
		{
			count++;
			flag = 1;
		}
	}
	printf("%d\n", count);
}

void avsA(char *pt, int len)
{
	int count = 0, count2 = 0;


	for (int i = 0; i < len; i++)
	{
		if ((int)*(pt + i) > 97 && (int)*(pt + i) < 123)
		{
			count++;
		}
		if ((int)*(pt + i) > 64 && (int)*(pt + i) < 91)
		{
			count2++;
		}
		if (*(pt + i) == '\0')
			break;
	}
	printf("%d процентов\n", count/count2*100);
}
void OpenKprint(char *pt, int len)
{
	int count = -1, flag = 0;


	for (int i = 0; i < len; i++)
	{
		if (*(pt + i) == ')')
		{
			flag = 0;
		}
		if (*(pt + i) == '(')
		{
			i++;
			flag = 1;
		}
		if (flag == 1)
		{
			printf("%c", *(pt + i));
		}
	}
	printf("\n");
}