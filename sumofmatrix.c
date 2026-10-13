#include<stdio.h>
int main(){
    int m,n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    printf("enter the number of column: ");
    scanf("%d",&m);
    int arr[n][m]; // r*c total element
    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of matrix is %d",sum);
    return 0;
}