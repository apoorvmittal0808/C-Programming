/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/
#include<stdio.h>
main()
{
    int maths,english,science,total_marks;
	printf("The marks in english is ");
	scanf("%d",&english);
	printf("The marks in maths is ");
	scanf("%d",&maths);
	printf("The marks in science is ");
	scanf("%d",&science);
	total_marks=(english+maths+science)/3;
	printf("The total marks are %d\n",total_marks);
	if(total_marks>=40 && english>=33 && science>=33 && maths>=33)
	printf("The student is pass");
	else
	printf("The student is fail");	
}
