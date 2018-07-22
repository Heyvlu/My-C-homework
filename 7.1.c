#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i;
	time_t t;
	int b[15];
	srand((unsigned)time(&t));
	printf("Ten random numbers from 0 to 99\n\n");
	for(i=1;i<=15;i++)
	{
	b[i]=rand()%100;
	printf("%d",b[i]);
	if(i%5==0)
	printf("\n");
		}
	system("pause");
	return 0;	
} 
