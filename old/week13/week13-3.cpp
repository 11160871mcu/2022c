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
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
}
