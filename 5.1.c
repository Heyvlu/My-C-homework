#include<stdio.h>
#include<windows.h>
double cal(double a,double b,int c)
{
	if(c == 1)
		return a + b;
	if(c == 2)
		return a - b;
	if(c == 4)
		return 1/a+1/b;
}
int main()
{
	double a,b;
	int c;
	printf("1.���������ĺ�\n\ 
2.���������Ĳ�\n\
3.�����������̺�����\n\
4.���������ĵ���֮��\n\
����0�˳�ϵͳ\n");
	while(1)
	{
		scanf("%d",&c);
		if(c == 0)
			return 0;
		scanf("%lf%lf",&a,&b);
		if(c==3)
		{
			printf("Answer is %d������������%d",(int)a / (int)b,(int)a % (int)b);
			system("pause");
			continue;
		}
		printf("Answer is %lf. Press any key to continue",cal(a,b,c));
		system("pause");
	}
 } 

