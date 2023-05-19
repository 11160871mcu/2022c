
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%0.2d:%0.2d:%0.2d",n/3600,n/60%60,n%60);
}
