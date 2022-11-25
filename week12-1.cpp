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
