/* strcpy��������ָ��tָ����ַ�����ֵ��ָ��sָ���λ�ã�ʹ�������±�ʵ�ֵİ汾 */
void strcpy(char *s, char *t)
{
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0')

		i++;
}

/* ʹ��ָ�뷽ʽʵ�ֵİ汾 */
void strcpy(char *s, char *t)
{
	while ((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}

/* ʹ��ָ�뷽ʽʵ�ֵİ汾2 */
void strcpy(char *s, char *t)
{
	while ((*s++ = *t++) != '\0')
		;
}

/* ʹ��ָ�뷽ʽʵ�ֵİ汾3 */
void strcpy(char *s, char *t)
{
	while (*s++ = *t++)
		;
}

/* strcmp����������s�����ֵ�˳��С�ڡ����ڡ�����t�Ľ���ֱ𷵻ظ�������0�������� */
int strcmp(char *s, char *t)
{
	int i;

	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i] - t[i];
}

/* �汾2 */
int strcmp(char *s, char *t)
{
	for ( ; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}