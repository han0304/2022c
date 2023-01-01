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
##step01-2_local變數的修改,不會動到global變數
```cpp
#include <stdio.h>
int a=10;
void func()
{
    int a=20;
    printf("func()裡的a是:%d\n",a);
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
##step02-1_函式的參數傳遞
```cpp
#include <stdio.h>
int n=30;
int funcA(int a,int b)
{
    printf("funcA()的a,b是:%d %d\n",a,b);
    return a + b;
}
int funcB(int n)
{
    printf("funcB() 的 n 是:%d\n",n);
    int ans=funcA(n, n);
    return ans;
}
int main()
{
    int a=10,b=20;
    funcB(b);
    funcA(a,b);
    printf("main()的a,b是%d %d\n",a,b);
}
```
##step02-2_輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(1){
        c=a%b;
        printf("%d %d %d\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("%d",b);
}
```
##step02-3_利用函式呼叫函式的方式, 來計算「輾轉相除法」找最大公因數
```cpp
#include <stdio.h>
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=gcd(a,b);
    printf("%d",ans);
}
```
# Week15
##step01-1_字串
```cpp
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    char line []="Hello World";
    printf("整數 %d\n",100);
    printf("浮點數 %f\n",3.141592653589793238462643383279);
    printf("%s 字串\n",line);
}
```
##step02-1_使用 %c 及 %d
```cpp
#include <stdio.h>
int main()
{
    printf("%c : %d\n",65,65);
    printf("%c : %d\n",66,66);
    printf("%c : %d\n",67,67);
    printf("%c : %d\n",'A','A');
    printf("%c : %d\n",'B','B');
    printf("%c : %d\n",'C','C');
    printf("上面用數字 64 及單引號 'a' 的結果都一樣\n");
    printf("%c : %d\n",97,97);
    printf("%c : %d\n",'a','a');
}
```
##step02-2_字串的迴圈
```cpp
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n",65,65);
    printf("=%c=%d=\n",'+','+');
    printf("=%c=%d=\n",'\n','\n');
    printf("=%c=%d=\n",'\t','\t');
    printf("=%c=%d=\n",'\0','\0');
    char line []="Hello World AAA";
    for(int i=0;       ;i++){
        char c=line[i];
        if(c==0)break;
        printf("=%c",c);
    }
}
```
##step03-1_字串反印
```cpp
#include <stdio.h>
char line [3000];
int main()
{
    printf("請輸入一堆字母,不要有空格哦: ");
    scanf("%s",line);
    int N=0;
    for(int i=0;line[i]!=0;i++){
        N++;
    }
    for(int i=N-1;i>=0;i--){
        printf("%c",line[i]);
    }
}
```
# Week16
##step01-1_了解 scanf()
```cpp
#include <stdio.h>
int main()
{

    char line[300];
    char*p=line;
    int n=10;
    int *p2=&n;
    float f=3.1415926;
    float *p3=&f;
    char c='A';
    char*p4=&c;
}
```
##step02-1_strlen() 字串長度length, strcpy()  字串複製copy,  strcmp() 字串比較compare
```cpp
#include <stdio.h>
#include <string.h>
int main()
{
    char line [20]="Hello";
    int N=strlen(line);
    printf("Hello字串的長度%d\n",N);
    char line2[20];
    strcpy(line2,line);
    printf("line2 得到: %s\n",line2);
    printf("比較字串 strcmp(line, line2) 得到 %d\n",strcmp(line, line2));
}
```
##step02-2_股票最佳買點與賣點
```cpp
#include <stdio.h>
int a[2000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-99999999,buy,sell;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>max){
				max=a[j]-a[i];
				buy=i;
				sell=j;
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",a[sell],a[buy],max);
}
```
# Week17
##step01-1
```cpp
void setup(){
  size(400,400);
  background(#EAFF0D);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1') stroke(255,0,0);
  if(key=='2') stroke(0,255,0);
  if(key=='3') stroke(0,0,255);
}
```
##step01-2_互動小畫家
```cpp
void setup(){
  size(400,400);
  background(#EAFF0D);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1') stroke(255,0,0);
  if(key=='2') stroke(0,255,0);
  if(key=='3') stroke(0,0,255);
}
```
##step01-3_用 box(100) 畫3D的box
```cpp
void setup(){
  size(400,400,P3D);
}
void draw(){
  background(#EAFF0D);
  translate(width/2,height/2);
  rotateY( radians(frameCount) );
  box(100);
}
```
##step02-1_圖片
```cpp
PImage img;
void setup(){
  size(400,400);
  img=loadImage("image.png");
}
void draw(){
  background(255,0,0);
  image(img, 0, 0);
}
```
##step02-2_不只一張圖片
```cpp
PImage img,img2,imgBG;
void setup(){
  size(400,400);
  imgBG = loadImage("BG.png");
  img = loadImage("astro.png");
  img2 = loadImage("image2.png");
}
void draw(){
  imageMode(CENTER);
  image(imgBG,200,200,400,400);//background(0,255,0);
  image(img2,100,100);
  image(img,mouseX,mouseY);
}
```
##step03-1_音檔
```cpp
import processing.sound.*;
SoundFile file;
void setup(){
  size(300,300);
  file = new SoundFile(this,"beat.aiff");
  file.loop();
}
void draw(){
}
```
