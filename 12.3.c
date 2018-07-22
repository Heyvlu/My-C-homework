#include <stdio.h>
int main()
{
	char s[5][80];
	int i,n=0;
	printf("input 5 strings:\n");
	for (i=0;i<5;i++)
	 scanf("%s",s[i]);
	for (i=1;i<5;i++)
	{
	if (strcmp(s[i],s[n])>0)n=i;
	}
	printf("max string is %s\n",s[n]);
	return 0;
}
