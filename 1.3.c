#include<stdio.h>
int main()
{
 int a=1; 
 while(a!=0){
 printf("查询菜单\n"); 
 printf("1.按书名查找\n");
 printf("2.按作者查找\n");
 printf("3.按出版编号查找\n");
 printf("4.按出版社查找\n");
 scanf("%d",&a);
 if(a==0)break;
 }
 system("pause");
  return 0;
}
