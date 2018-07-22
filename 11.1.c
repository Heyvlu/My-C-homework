#include "stdio.h"
void func(int *a,int n)
{
     int i,j,tmp;
     for(i=0;i<n-1;i++)
         for(j=i+1;j<n;j++)
           if(*(a+i)>*(a+j))
           {
                tmp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=tmp;
 
           }
     for(i=0;i<n;i++)
           printf("%d ",*(a+i));
     printf("\n");
 
}
int main()
{
      int a[3]={0};
      int i;
      for(i=0;i<3;i++)
            scanf("%d",&a[i]);
      func(a,3);
 
}
