#include <stdio.h>
int sum(int N)
{
	int ans=0;
	for(int i=1;i<=N;i++){
		ans+=i;
	}
	return ans;
}
int main()
{
	int K;
	scanf("%d",&K);
	int ans=0;
	for(int N=1;N<=100;N++){
		if(sum(N)>K){
			ans=N;
			break;
		}
	}
	printf("%d",ans);
}
