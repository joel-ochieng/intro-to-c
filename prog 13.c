#include<stdio.h>
int main()
{
	int x=2;
	switch (x)
	{
		case 1:printf("choice is 1");
		break;
		case 2:printf("choice is 2");
		break;
		case 3:printf("choice is 3");
		break;
		default:printf("choice is any value after 1,2,3");
		break;
	}
	return 0;
}
