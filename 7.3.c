#include<stdio.h>
int main()
{
	long s[20]={1,1};
	long sum=0;
	int i;
	for(i=3;i<20;i++)
	{
		s[i]=s[i-1]+s[i-2]+s[i-3];
	}
	for(i=3;i<20;i++)
	{
		sum+=s[i];
	}
	printf("1+1+2+4+7......+=%d\n",sum);
	system("pause");
	return 0;
}
