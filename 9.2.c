#include<stdio.h>
#include<math.h>
int main()
{
	double s,x,pi=3.1416;
	int n=10;
	s=0;
	for(x=pi/n;x<=pi;x+=pi/n)
	{
		s+=0.5*(sin(2*x)+3*x+sin(2*(x-pi/n))+3*(x-pi/n))*pi/n;	
	}
	printf("%5.3f\n",(float)s);
	s=0;
	n=20;
	for(x=pi/n;x<=pi;x+=pi/n)
	{
		s+=0.5*(sin(2*x)+3*x+sin(2*(x-pi/n))+3*(x-pi/n))*pi/n;	
	}
	printf("%5.3f",(float)s);
	return 0;	
}
