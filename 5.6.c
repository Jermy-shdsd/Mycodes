#include <stdio.h>
#include <string.h>

#define MAXLINES 5000			/* �������������ı����� */

char *lineptr[MAXLINES];		/* ָ���ı��е�ָ������ */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/*  ��������ı��н������� */
main()
{
	int nlines;			/* ��ȡ����������Ŀ */

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr,nlines);
		return 0;
	}
	else
	{
		printf("error: input too big to sort \n");
		return 1;
	}
}

#define MAXLEN 1000			/* ÿ�������ı��е���󳤶� */
int getline(char *, int);
char *alloc(int);

/* readlines��������ȡ������ */
int readlines(char *lineptr[], int maxlines);
{
	int len, nlines;
	char *p, line[MAXLINE];
	
	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0)
		if (nlines >= maxlines ||(p = alloc(len)) == NULL)
			return -1;
		else 
		{
			line[len - 1] = '\0';		/* ɾ�����з� */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}

	return nlines;
}

/* writelines ������д����� */
void writelines(char *lineptr[], int nlines)
{
	int i;

	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}

void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right)			/*�������Ԫ�صĸ���С��2���򷵻� */
		return;
	swap (v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (strcmp