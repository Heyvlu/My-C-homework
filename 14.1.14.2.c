#include<stdio.h>
#include<stdlib.h>
#define N 5
struct student
{
	int num;
    char name[10];
    float eng;
    float mat;
    float com;
}
stu[N];
int main()
{
    FILE *fp;
    int i;
    float ave=0;
    if((fp=fopen("C:\\Users\\小可爱\\Desktop\\students.dat","r"))==NULL)
     {
         printf("Open file error!");
         exit(0);
     }
     for(i=0;i<N;i++)
     {    fscanf(fp,"%d",&stu[i].num);
         fscanf(fp,"%s",&stu[i].name);
         fscanf(fp,"%f",&stu[i].eng);
         fscanf(fp,"%f",&stu[i].mat);
         fscanf(fp,"%f",&stu[i].com);
         //fread(&stu[i],sizeof(struct student),1,fp);
         ave = (stu[i].eng + stu[i].mat + stu[i].com)/3;
         printf("学号\t姓名\t平均成绩\n");
         printf("%d\t%s\t%.2f\n",stu[i].num,stu[i].name,ave);
     }
	     fclose (fp);
     return 0;
 }
