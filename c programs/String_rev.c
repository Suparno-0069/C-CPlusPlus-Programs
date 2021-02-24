#include<stdio.h>
void revrseSentence();

int main()
{
	printf("Enter a Sentence : ");
	revrseSentence();
	return 0;
}

void revrseSentence()
{
	char c;
	scanf("%c", &c);
	if(c != '\n')
	{
		revrseSentence();
		printf("%c", c);
	}
}
