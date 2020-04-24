#include<stdio.h>
int main()
{
	int n,num,digit,sum=0,fact=1,i,rem;
	printf("Enter a Number");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		rem=n%10;
		for(i=1;i<=rem;i++)
		fact*=i;
		sum+=fact;
		fact=1;
		n=n/10;
	}
	if(sum==num)
	printf("It is  Special Number");
	else
	printf("It is not a Special Number");
	getch();
}
