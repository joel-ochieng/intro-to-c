#include<stdio.h>
int main()
{
	char c[100];
	FILE*fptr;
	fptr=fopen("program.txt","w");
	if(fptr==NULL){
	printf("error!");

	}
	printf("enter c:");
	scanf("%d",&c);
	fprintf(fptr,"%d",c);
	fclose(fptr);
	return 0;
}
