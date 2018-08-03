#include <stdio.h>
int i,std_num,j;
struct stud
{
	int roll_no;
	char stud_name[100],std_class[100],std_div[100];
	float mark1,mark2,mark3,mark4,mark5,avg_mark;	
}stud1[100],temp;

int main(int argc, char const *argv[])
{
	/* code */
	printf("Enter the number of students details you want to enter\t");
	scanf("%d",&std_num);
	for (i=1;i<=std_num;i++)
	{
		printf("\nEnter the student name:\t");
		scanf("%s",stud1[i].stud_name);
		printf("\nEnter the roll number:\t");
		scanf("%d",&stud1[i].roll_no);
		printf("\nEnter the student class:\t");
		scanf("%s",stud1[i].std_class);
		printf("\nEnter the student division:\t");
		scanf("%s",stud1[i].std_div);
		printf("\nEnter the student mark1:\t");
		scanf("%f",&stud1[i].mark1);
		printf("\nEnter the student mark2:\t");
		scanf("%f",&stud1[i].mark2);
		printf("\nEnter the student mark3:\t");
		scanf("%f",&stud1[i].mark3);
		printf("\nEnter the student mark4:\t");
		scanf("%f",&stud1[i].mark4);
		printf("\nEnter the student mark5:\t");
		scanf("%f",&stud1[i].mark5);
		stud1[i].avg_mark=(stud1[i].mark1+stud1[i].mark2+stud1[i].mark3+stud1[i].mark4+stud1[i].mark5)/5;
		printf("\n%s's average mark is %f\n",stud1[i].stud_name,stud1[i].avg_mark);
	}
	sort(std_num,stud1);
	return 0;
}

