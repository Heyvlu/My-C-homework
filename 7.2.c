#include<stdio.h>
#include<stdlib.h>
#define n 10
int main()
{
	int a[n]={99,86,67,95,85,69,100,91,89,93};
	int avg=0,num=0,sum=0,max,min;
	int i;
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	min=a[0];
	max=a[0];
	for(i=0;i<10;i++)
	{
	if(a[i]<min)
	min=a[i];
	if(a[i]>max);
	max=a[i];
	if(a[i]>avg)
	num++;	
	}
	printf("max=%d,min=%d,num of more than avg=%d\n",max,min,num);
	system("pause");
	return 0;
}
