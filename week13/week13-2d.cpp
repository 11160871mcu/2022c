#include <stdio.h>
#include <math.h>
int main()
{
	int n , ans=0 , u , b=0;
	scanf("%d",&n);
	while(n>0){
		u = n%10;
		n = n/10;
		ans += u * pow(2,b);
		b++;
	}
	printf("%d\n",ans);
}
