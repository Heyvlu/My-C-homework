#include<time.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	struct tm *date;
	time_t curr;
	curr =time(NULL);
	date =localtime(&curr);
	printf("%d/%d/%d %d:%d:%d\n",date->tm_year+1900,date->tm_mon+1,date->tm_mday,date->tm_hour,date->tm_min,date->tm_sec);
	return 0;
}
