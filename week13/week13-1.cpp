#include <stdio.h>
int main()
{
	int a[21]={0},n,max,min;
	int ans=0;
	scanf("%d",&n);
	printf("�Ы����N���~�� . . . \n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++){
		for(int j=i+1; j<n;j++){
			if(a[j]-a[i]>ans){
				ans=a[j]-a[i];
				max=a[j];
				min=a[i];
			}
		}
	}
	printf("�̤j�Q��=%d-%d=%d\n",max,min,ans);
}
