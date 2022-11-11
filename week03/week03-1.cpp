#include <stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d加%d得到%d\n",a,b,a+b);
    printf("%d減%d得到%d\n",a,b,a-b);
    printf("%d乘%d得到%d\n",a,b,a*b);
    printf("%d除%d得到%d\n",a,b,a%b);
}
