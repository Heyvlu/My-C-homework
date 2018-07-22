#include<stdio.h>
int *address(int m,int n)
{
	if(m>n)
		return &m;
	else 
		return &n;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("Max address is %x",address(m,n));
	return 0;
}

