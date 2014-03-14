/* ����� "&" "*" */
int x = 1, y = 2, z[10];
int *ip;			// ������ip��ָ��int���͵�ָ��

ip = &x;			// ip����ָ��x
y = *ip;			// y��ֵ������1
*ip = 0;			// x��ֵ������0
ip = &z[0];			// ip����ָ��z[0]

/////////////////////////////////////////////////////////////////////////////////////////
/* ���������ĸı䣬swap���� */
void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

/////////////////////////////////////////////////////////////////////////////////////////
int n, array[SIZE], getint(int *);

for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
	;
/////////////////////////////////////////////////////////////////////////////////////////
#include <ctype.h>

int getch(void);
void ungetch(int);

/* getint�������������е���һ����������ֵ�� *pn */
int getin(int *pn)
{
	int c, sign;

	while (isspace(c = getch()))				/* �����հ׷� */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		ungetch(c);				/* ���벻��һ������ */ 
		return 0;
	}
	sign = (c == '-') ? -1: 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}


