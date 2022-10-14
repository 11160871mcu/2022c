# 2022c
資傳一甲程式設計的城市倉庫

# week06

## step01-0
考九九乘法表
```cpp
#include <stdio.h>
int main()
{
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			printf("%d*%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
}
```
## step01-1_畫星星-金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=i*2-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
## step01-2
要先把樓層鷹架架好, 再去思考有幾個空格、有幾個星星。經過觀察 1樓4空格1星, 2樓3空格3星, 3樓2空格5星, 4樓1空格7星, 5樓0空格9星, 所以 i樓+space空格=5, space空格 = 5-i; 就可以把5層樓的金字塔建出來了。
```cpp
#include <stdio.h>
int main()
{
    for (int i=1;i<=5;i++){
        int space=5-i;
        int star=i*2-1;
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step01-3
最大公因數-暴力法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        if (a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step01-4
輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step01-5
老師花了點時間講解(剛剛輾轉相除法)裡面的 break 什麼意思? c = a%b 什麼意思? while(1) 什麼意思? 為了能更清楚了解 while(1) 為什麼是「一直做」的迴圈, 老師利用一堆 if(1) ... if(2) ... 讓大家了解, 其實所有的數值幾乎都成立, 只有 0 是不成立。
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0成立\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西,幾乎都成立\n");
}
```
