# 2022c
資傳一甲程式設計 的程式倉庫

# Week01
放假(中秋節)

# Week02


# Week06
## step01-0
考試九九乘法表、考前複習、考後檢討同學出錯的狀況。
```cpp
#include <stdio.h>
int main()
{
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			printf("%d*%d=%2d ",j,i,j*i);
		}
		printf("\n");
	}
}
```
## step01-1_畫星星-金字塔
使用的技巧,是先用左手i來建立鷹架。
```cpp
//上周的畫星星
// ***** 鷹架 5
// **** 鷹架 4
// *** 鷹架 3
// ** 鷹架 2
// * 鷹架 1
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=1*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
## step01-2_金字塔
有了鷹架樓層,接下來便是決定第i樓有幾個space空格,有幾個star星星,找到規律,便能寫出公式,並利用迴圈基礎型,輕鬆把星星畫出來。
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){ 
        int space=5-i;
        int star=i*2-1;
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step02-1_想要分數約分,可以使用暴力法,去找到都整除的數字,就能約分了
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        if(a%i==0&&b%i==0) ans=1;
    }
    printf("找到ans:%d",ans);
}
```
## step02-2_介紹輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step02_除了0以外的都成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999)printf("-999成立\n");
    if(-3)printf("-3成立\n");
    if(-2)printf("-2成立\n");
    if(-1)printf("-1成立\n");
    if(0)printf("0不成立,所以什麼都沒印\n");
    if(1)printf("1成立\n");
    if(2)printf("2成立\n");
    if(3)printf("3成立\n");
    if(4)printf("4成立\n");
    if(999)printf("999成立\n");
    if("a==0")printf("不管什麼東西,幾乎都成立");
}
```
# Week07
## step01-1_long long int
```cpp
#include <stdio.h>
int main()
{///int 整數 可以裝 32-bit的整數
    int n=1234567812345678;
    printf("%d\n",n);
    long long int a=1234567812345678;
    printf("%lld\n",a);
}
```
## step02-1_long long int最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;///很長很長的整數a,b
    scanf("%lld %lld",&a,&b);
    long long int ans;
    ///去試1,2,3,......a看能不能和a b 整除
    for(long long int i=1;i<-a;i++){
        if (a%i==0&&b%i==0)ans=i;
    }
    printf("答案是%lld\n",ans);
}
```
## step02-2_long long int輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld%lld",&a,&b);
    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if (c==0)break;
        a=b;
        b=c;
    }
    printf("答案是:%lld/n",b);
}
```
## step02-3_long long int剝皮法
```cpp
#include <stdio.h>
int main()
{
    int n=123456789;
    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;

    printf("個位數是%d\n",n%10);
    n=n/10;
}
```
## step02-4_long long int倒過來剝皮法
```cpp
#include <stdio.h>
int main()
{
    int n=1234;

    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```
# Week08
##step01-1_2個 while迴圈 來畫出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			if(k<=n-i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}
```
##step02-1_for改成 while迴圈來畫出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int k=1;
		while (k<=n){
			if(k<=n-i)printf(" ");
			else printf("*");
			k++;
		}
	printf("\n");
	i++;
	}
}
```
##step02-2_利用 int bad=0判斷是否為質數
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是孤獨的質數:");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if (n%i==0)bad=1;
    }
    if(bad==0)printf("%d是質數(沒有壞掉)",n);
    else printf("%d不是質數(早就壞掉)",n);
}
```
##step02-3_"列出質數" 用 for迴圈列出 2到a 的所有質數
```
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int n=2;n<=a;n++){
        int bad=0;
        for(int i=2;i<n;i++){
            if(n%i==0) bad=1;
        }
        if(bad==0)printf("%d ",n);
    }
}
```
