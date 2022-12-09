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
    for(long long int i=1;i<=a;i++){
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
# Week10
##step01-1_陣列宣告
```cpp
///step1-1
#include <stdio.h>
int main()
{
    ///int a;
    ///int a[4]:///有四格
    int a[4]={10,20,30,40};
    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}
```
#step02-1_陣列怎麼正著印、倒著印
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    ///i:0 1 2 3
    for(int i=0;i<4;i++){///電腦的迴圈,0開始
        printf("a[%d]:%d\n",i,a[i]);
    }
        ///i:3 2 1 0
    for(int i=3;i>=0;i--){///倒過來的迴圈
        printf("%d ",a[i]);
    }
}
```
# Week11
##step01-1_ int temp=a; a=b; b=temp; a=90 b=80互換
```cpp
///兩數想交換,口訣:int temp=a;a=b;b=temp;
#include <stdio.h>
int main()
{
    int a=90,b=80;
    printf("a:%d b:%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("a:%d b:%d\n",a,b);
}
```
##step01-2_abc互換
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d",a,b,c);
}
```
##step02-1_從左到右巡一輪,兩兩比較,不對就交換
```cpp
///2數 => 2種結果
///3數 => 6種結果
///4數 => 24種結果
///5數 => 120種結果
///10數排序......
///攝影師在拍團體照時,調整高低的方法
///口訣:從左到右巡一輪,兩兩比較,不對就交換
#include <stdio.h>
///       a[0] a[1]...                       a[9]
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
}
```
##step02-2_貼很多次
```cpp
#include <stdio.h>
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);///印出來
    printf("\n");

    for(int i=0;i<10-1;i++){///巡一輪
        if(a[i]>a[i+1]){///希望左小右大,但不對......
            int temp=a[i];///不對就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);///印出來
    printf("\n");

    for(int i=0;i<10-1;i++){///巡一輪
        if(a[i]>a[i+1]){///希望左小右大,但不對......
            int temp=a[i];///不對就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);///印出來
    printf("\n");
    for(int i=0;i<10-1;i++){///巡一輪
        if(a[i]>a[i+1]){///希望左小右大,但不對......
            int temp=a[i];///不對就交換
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);///印出來
    printf("\n");
}
```
##step03-1_泡泡排序法
```cpp
#include <stdio.h>
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);///印出來
    printf("\n");

    for(int k=0;k<10-1;k++){
        for(int i=0;i<10-1;i++){///巡一輪
            if(a[i]>a[i+1]){///希望左小又大,但不對...
                int temp=a[i];///不對就交換
                a[i]=a[i+1];
                a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);///印出來
    printf("\n");
    }
}
```
# Week12
##step01-1_Selection Sort 選擇排序法, 口訣 左手i 右手j, 不對就交換
```cpp
///排序-選擇排序Selectiom Sort
///口訣:左手i 右手j
#include <stdio.h>
int a[5]={5,4,3,2,1};
int main(){
    for(int i=0;i<5;i++){///左手i
        for(int j=i+1;j<5;j++){///右手j
            if(a[i]>a[j]){///不對就交換
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)printf("%d ",a[i]);
}
```
##step02-2_從簡單的整數宣告、整數宣告並給初始值、陣列宣告、陣列宣告並給初始值、二維陣列宣告、二維陣列宣告並初始值, 小心右邊給值時, 是用大括號
```cpp
#include <stdio.h>
int main()
{
    int a;///宣告整數a
    int b=10;///宣告整數b裡面放10
    int c[3];///宣告整數陣列c 有3格
    int d[3]={10,20,30};///宣告整數陣列d有3格 放10 20 30
    int g[2][3];///宣告二維陣列
    int h[2][3]={{10,20,30},{40,50,60}};
    ///宣告二維陣列 左手i 右手j
}
```
##step02_2_把二維陣列拿來用, 配合2層迴圈
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={{10,20,30},{40,50,60}};
    ///左手i 右手j
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
##step03-1_矩陣加法
```cpp
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",c[i][j]);
		}
	printf("\n");
	}
}
```
##step03-2_矩陣乘法
```cpp
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
# Week13
##step01-1_買賣股票的最佳時機
```cpp
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int left,right;
	int ans= -99999999;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>ans){
				ans=a[j]-a[i];
				left=a[i];
				right=a[j];
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",right,left,ans);
}
```
##step02-1_a[i] = a[i-1] + a[i-2];
```cpp
#include <stdio.h>
int a[50];
int main()
{
    a[0]=0;
    a[1]=1;
    for(int i=2;i<45;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<45;i++){
        printf("%d ",a[i]);
    }
}
```
##step02-3_矩陣轉180度
```cpp
#include <stdio.h>
int a[200][200];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}
```
##step03-1_function函式
```cpp
#include <stdio.h>
int addnum(int a,int b)
{
    return a+b;
}
int main()
{
    int ans=addnum(2,3);
    printf("addnum(2,3)會得到%d\n",ans);
}
```
# Week14
##step01-1_變數的範圍
```cpp
#include <stdio.h>
int a=10;
void func()
{
    a=30;
    printf("func()中 a改成:%d\n",a);
}
int main()
{
    printf("main()中 a是:%d\n",a);
    func();
    printf("main()中 a是:%d\n",a);
}
```
##
