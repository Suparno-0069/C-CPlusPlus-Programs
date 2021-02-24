#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct student
{
	char name[100];
	int s1, s2, s3, total;
}s[10];

int main()
{
	
	int n, i, totalA = 0;
	float avg = 0.0;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		printf("Enter the name : ");
		scanf("%s",s[i].name);
		printf("Enter marks for subject1 : ");
		scanf("%d", &s[i].s1);
		printf("Enter marks for subject2 : ");
		scanf("%d", &s[i].s2);
		printf("Enter marks for subject3 : ");
		scanf("%d", &s[i].s3);
		s[i].total = s[i].s1 + s[i].s2 + s[i].s3;
		totalA += s[i].total;
		printf("\nThe total marks of %d th student is : %d\n", i+1, s[i].total);
	}
	avg = (float)totalA/n;
	printf("\nTotal marks obtained by the the students is : %d", totalA);
	printf("\nThe  average total marks is : %.2f", avg);
	return 0;
}
