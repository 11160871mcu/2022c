#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[20];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
