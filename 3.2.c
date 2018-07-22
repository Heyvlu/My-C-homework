#include<stdio.h>
int main()
{
	int p=1;
	printf("输入任意数继续或输入零退出程序\n");
	while(p!=0)
	{
		scanf("%d",&p);
		if(p==0)
		break;
		printf("八进制：%o\n",&p);
		printf("十六进制：%x\n",&p);
		
		
	}
	return 0;
}
