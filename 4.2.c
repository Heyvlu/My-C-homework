#include<stdio.h>
#include<math.h>
double q(double a,double b,double c)
{
	return b*b-4*a*c;
	}	
double g(double a,double b,double c,int flag)
{
	return (-b+flag*sqrt(q(a,b,c)))/a*0.5;
}
int main(void){
	double a,b,c,t;
	printf("input a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(0==a)
	printf("x1=x2=%lf\n",-c/b); 
	else{
		t=q(a,b,c);
		if(t<0)
		printf(" ¸ù²»´æÔÚ\n");
		else if(t==0)
		printf("x1=x2=%lf\n",-b/a*0.5);
		else 
		printf("x1=%lf,x2=%lf\n",g(a,b,c,1),g(a,b,c,-1));
	}
}

