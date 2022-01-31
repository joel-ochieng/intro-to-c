#include<stdio.h>
int main ()
{
	char c[1000];
	FILE*fptr;
	fptr=fopen ("program.txt","w");
	if (fptr==NULL)
	{
		printf("error!");
		exit(1);
	}
	printf("enter a sentence:\n");
	gets(c);
	fprintf(fptr,"%s",c);
	fclose(fptr);
	return 0;
}
