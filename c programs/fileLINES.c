#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define RSIZ 10
#define LSIZ 128
int main()
{
	FILE *fptr = NULL;
	char line[RSIZ][LSIZ];
	char fname[20];
	int i  = 0, tot = 0;
	printf("\n\n Read the file and store the lines into an array :\n");
	printf("------------------------------------------------------\n");
	printf(" Input the filename to be opened : ");
	scanf("%s", fname);
	fptr = fopen(fname, "r");
	while(fgets(line[i], LSIZ, fptr))
	{
		line[i][strlen(line[i]) - 1] = '\0';
		i++;
	}
	tot = i;
	printf("\n The content of the file %s are : \n", fname);
	for(i = 0; i < tot; ++i)
		printf(" %s\n", line[i]);
	printf("\n");
	return 0;
}
