#include <stdio.h>

/* ���Գ��������в������汾1 */
main (int argc, char *argv[])	// argc���ڲ��������� argv��һ��ָ��ָ�������ָ��
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s%s", argv[i], (i < argc-1) ? " " : "");
	printf("\n");
	return 0;
} 


/* ���Գ��������в������汾2 */
main(int argc, char *argv[])
{
	while (--argc > 0)
		printf("%s%s", *++argv, (argc > 1) ? " " : "");
	printf("\n");
	return 0;
}
