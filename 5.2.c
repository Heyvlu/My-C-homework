#include<stdio.h>
#include<math.h>
int main()
{
	double n=1,sum=1,p=1;
	while(p>=pow(10,-5))
	{
		p=pow(-1,n)/(pow(n,2)+1);
		n++;
		sum+=p;
	}
	printf("%lf",sum);
	return 0;
}
