#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n/i==i && n%i==0)	a=i;
	}
	printf("%d",a);
}
