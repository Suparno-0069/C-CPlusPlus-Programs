#include<stdio.h>
int main(int argc, char* argv[])
{
	int i;
	printf("Program name is : %s", argv[0]);
	if(argc == 1)
		printf("\nNo extra command line argument passed (only the program name).");
	if(argc >= 2)
	{
		printf("\nNumber of Arguments Passed : %d", argc);
		printf("\nPassed Command line Arguments are : \n");
		for(i=0; i<argc; i++)
			printf("\nargv[%d] : %s", i, argv[i]);
	}
	return 0;
}
