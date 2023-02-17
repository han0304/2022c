#include <stdio.h>
int main()
{
    long long int a,b;///很長很長的整數a,b
    scanf("%lld %lld",&a,&b);
    long long int ans;
    ///去試1,2,3,......a看能不能和a b 整除
    for(long long int i=1;i<=a;i++){
        if (a%i==0&&b%i==0)ans=i;
    }
    printf("答案是%lld\n",ans);
}
