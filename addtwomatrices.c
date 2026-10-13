#include<stdio.h>
int main(){
    int arr[2][2],brr[2][2],c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
            scanf("%d",&brr[i][j]);
        }
    }
   // for(int i=0;i<2;i++){
   //     for(int j=0;j<2;j++){
   //     c[i][j] = arr[i][j] + brr[i][j];
   //     }
   // }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}