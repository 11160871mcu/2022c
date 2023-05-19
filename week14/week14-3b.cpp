#include <stdio.h>
int main()
{
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==1)	printf("%d ",a[i]);
	}
}
