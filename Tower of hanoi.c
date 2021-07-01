#include<stdio.h>
void transfer(int n,char src,char trt,char auxi)
{
	if(n==1)
	{
		printf("\n move disk %d from peg %c to peg %c",n,src,trt);
	}
	else
	{
		transfer(n-1,src,auxi,trt);
		printf("\n move disk %d from peg %c to peg %c",n,src,trt);
		transfer(n-1,src,auxi,trt);
	}
}
int main()
{
	int n;
	printf("\nEnter th number of disk in source peg:");
	scanf("%d",&n);
	transfer(n,'s','t','a');
	return 0;
}
