#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%400%4==0)printf("%d is a leap year.\n",n);
	if(n%400%4!=0)printf("%d is not a leap year.\n",n);
}
