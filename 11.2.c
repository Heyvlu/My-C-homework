#include<stdio.h>
int main()
{
	char *pMonth[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int n;
	printf("�������·ݣ�");
	scanf("%d", &n);
	if (n < 1 || n > 12)
	{
		printf("�·��������\n");
	}
	else
	{
		printf("%s", *(pMonth+n-1));
	}
	return 0;
}
