#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int fast=0;
	for(int i=0;i<10;i++){
		if(a[i]<a[fast]){
			fast=i;
		}
	}
	int speed=60*60*1.2/a[fast];
	printf("%d %d\n",fast+1,speed);
}
