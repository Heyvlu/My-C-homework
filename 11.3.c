#include <stdio.h>
#include <string.h>
  
int find(char * str1, char * str2) 
{ 
    int i,j; 
    int str1len=strlen(str1),str2len=strlen(str2); 
    int count=0; 
    for(i=0;i<str1len-str2len+1;i++)
     { 
       for(j=0;j<str2len;j++)    
       { 
         if(str2[j]!=str1[i+j]) 
           break;    
       } 
       if(j==str2len)
         count++;    
     }
     return count;
}
     
int main()
{
    char a[200],b[200],*g;
    int c=0;
    printf("请输入主串：");
    gets(a);
    printf("请输入子串：");
    gets(b);
  
    c=find(a,b);
  
    printf("出现的次数：%d\n",c);
    return 0;
}
