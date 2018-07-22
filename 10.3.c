#include<stdio.h>  
#define Y(a,b) a%b   
int main()  
{  
    int a,b;  
    printf("Input a:");  
    scanf("%d",&a);  
    fflush(stdin);  
    printf("Input b:");  
    scanf("%d",&b);  
    fflush(stdin);  
    printf("%d %% %d=%d",a,b,Y(a,b));  
    return 0;  
}
