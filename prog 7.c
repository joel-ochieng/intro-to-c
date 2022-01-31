#include<stdio.h>
/*global variable definition*/
int z;
int main()
{
	/*local variable definition and initialization*/int x,y;
	
	/*actual initialization*/
	x=20;           //local
	y=30;          //local
	z=x+y;        //local
	printf("value of x=%d,y=%d and z=%d\n",x,y,z);
	return 0;
}
