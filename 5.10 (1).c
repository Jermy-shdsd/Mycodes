#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline(char *[], int max);

/* find������ ��ӡ���һ������ָ����ģʽƥ����� */
main (int argc, char *argv[])
{
	char line[MAXLINE];
	int found = 0;

	if (argc != 2)
		printf("Usage: find pattern\n");
	else 
		while (getline(line, MAXLINE) > 0)
			if (strstr(line, argv[1] != NULL)
			{
				printf("%s", line);
				found++;
			}
			return found;
}
/////////////////////////////////////////////////////////////////////////////////////
// �Ľ���
/////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

//int getline(char *[], int max);
//
///* find������ ��ӡ���һ������ָ����ģʽƥ����� */
//main (int argc, char *argv[])
//{
//	char line[MAXLINE];
//	long lineno = 0;
//	int c, except = 0, number = 0; found = 0;
//
//	while (--argc > 0 && (*++argv)[0] == '-')
//