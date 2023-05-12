#include <stdio.h>
int main()
{
	int a[11]={0};
	for(int i=0;i<11;i++){
		scanf("%d",&a[i]);
		if(a[i] == 0)	break;
	}

	int n;
	int b=0;
	scanf("%d",&n);
	for(int i=0;i<11;i++){
		if(a[i]== n)	b++;
	}
	printf("%d\n",b);
}
