#include<stdio.h>
void sum(int i,int j,int arr[i][j],int arr2[i][j]){
    int temp[i][j];
    for(int row=0;row<i;row++)
    {
        for(int col=0;col<j;col++)
        {
           temp[row][col]=arr[row][col] * arr2[row][col];
        }
    }
    for(int row=0;row<i;row++)
    {
        for(int col=0;col<j;col++)
        {
            printf("%d ",temp[row][col]);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("Enter Size of 1st The Matrix-> ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    printf("First Matrix->\n");
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
    int p,q;
    printf("Enter Size of 2nd The Matrix-> ");
    scanf("%d %d",&p,&q);
    int arr2[p][q];
    for(int row=0;row<p;row++)
    {
        for(int col=0;col<q;col++)
        {
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("Second Matrix->\n");
    for(int row=0;row<p;row++)
    {
        for(int col=0;col<q;col++)
        {
            printf("%d ",arr2[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Sum Matrix->\n");
   sum(m,n,arr,arr2);
}
