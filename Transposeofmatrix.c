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
    printf("Transpose of matrix is\n"); //or just change &arr[j][i]
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}