#include <stdio.h>
int main()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<b;i++){
		if(i%3==0)
		sum+=i;
	}
	if(b%3==0)printf("%d",sum+b);
	else printf("%d",sum);
}
