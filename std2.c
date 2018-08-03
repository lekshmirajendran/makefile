#include <stdio.h>
int i,std_num,j;
struct stud
{
	int roll_no;
	char stud_name[100],std_class[100],std_div[100];
	float mark1,mark2,mark3,mark4,mark5,avg_mark;	
}stud1[100];

void sort(int std_num, struct stud stud1[100])
{
	int temp;
	for(i=0;i<std_num;i++)
	{
		for(j=i+1;j<std_num;j++)
		{
			if(stud1[i].avg_mark>stud1[j].avg_mark)
			{
			temp=stud1[i].avg_mark;
			stud1[i].avg_mark=stud1[j].avg_mark;
			stud1[j].avg_mark=temp;
		    }
		}
	}
	printf("The students mark in mark wise\n ");
	printf("\nStudent name\t\tStudent avg_mark\n");
	for(i=std_num;i>0;i--)
		printf("%s\t\t\t%f\n",stud1[i].stud_name,stud1[i].avg_mark);

}
