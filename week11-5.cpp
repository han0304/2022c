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
