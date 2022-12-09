# 2022c
資傳一甲程式設計的城市倉庫

# week06

## step01-0_考九九乘法表
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
## step01-2_2層迴圈-更多種畫星星
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
## step01-3_最大公因數-暴力法
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
## step01-4_輾轉相除法
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
## step01-5_最大公因數-輾轉相除法
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
# week07

## step01-0_畫出金字塔
自訂行數
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int k=0;k<n-i;k++){
			printf(" ");
		}
		for (int k=0;k<i*2-1;k++){
			printf("*");
		}
	printf("\n");
	}
}
```
## step01-1_各種型別 long long int,
int整數型別, 只有32-bit,最多只能裝2,147,483,647, 所以很長很長的整數, 要用 long long int
```cpp
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d",n);
    long long int a=1234567812345678;
    printf("%lld",a);
}
```
## step02-1_複習最大公因數
### 有了long long int 那我們便能回來複習最大公因數了。數字範圍再大一點, 結果要算好久。讀寫資料時要用%lld 是小寫的LLD,不是數字11d哦
暴力法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
## step02-2_輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);

    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
```
## step03-1_十進位轉2進位(剝皮法)
```cpp
#include <stdio.h>
int main(){
    int n=123456789;

    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```
# week08
## step01-0_找出最大公因數-輾轉相除法
```cpp
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(1){
		c=a%b;
		if(c==0) break;
		a=b;
		b=c;
	}
	printf("%d",b);
}
```
## step01-1_ 2個 for迴圈 來畫出直角三角形
### 口訣是先能畫出正方形。再來的關鍵, 是空格有幾個。空格有n-i個。所以 把 if寫出來, 成立時印空格, else印星星
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if( k<=n-i ) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
```
## step02-1_2個while迴圈, 去寫出有空格、有星星的直角三角形
### 用了2個for迴圈來改寫
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n){
            if(k<=n-i) printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```
## step02-2_質數判別
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是孤獨的質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2;i<n;i++){
        if( n%i==0 ) bad=1;
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)",n);
    else printf("%d 不是質數(早就壞掉了)",n);
}
```
## step02-3_輸出數字的質因數
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int n=2;n<=a;n++){
        int bad=0;
        for(int i=2;i<n;i++){
            if( n%i==0 ) bad=1;
        }
        if(bad==0) printf("%d ",n);
    }
}
```
# week10
## step01-1_陣列宣告
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}
```
## step02-1_陣列正著印、倒著印
```cpp
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
}
```
# week11
## step01-1_排序技巧-交換
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80;
    printf("a:%d b:%d\n",a,b);
    int temp = a;
    a=b;
    b=temp;
    printf("a:%d b:%d\n",a,b);
}
```
## step01-2_三數排序的部分,使用的口訣是「比大小,不對就交換」
```cpp
#include <stdio.h>
int main()
{
    int a=90,b=80,c=70;
    if(a>b){
        int temp = a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp = b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp = a;
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d\n",a,b,c);
}
```
## step02-1_3數排序,口訣「從左到右巡一輪,兩兩比較,不對就交換」
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};

    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}

```
## step02-2_前面的程式,只把「最肥的數字」移到右邊,因此,我們就用 Ctrl-C 的方法 貼很多次, 並逐一印出來
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};

    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}

```

## step03-1_泡泡排序法,其實就是把剛剛的程式,重覆做很多次。因為是重覆的程式碼,直接用 for(int k=0; k小於「重覆的次數」; k++){ } 來重覆做
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};

    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int k=0;k<10-1;k++){

        for(int i=0;i<10-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++) printf("%d ",a[i]);
        printf("\n");
    }
}

```
# week12
##  step01-1_選擇排序法, 口訣 左手i 右手j, 不對就交換
```cpp
#include <stdio.h>
int a[5]={5,4,3,2,1};
int main()
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
}
```
## step02-2_從簡單的整數宣告、整數宣告並給初始值、陣列宣告、陣列宣告並給初始值、二維陣列宣告、二維陣列宣告並初始值, 小心右邊給值時, 是用大括號哦
```cpp
#include <stdio.h>
int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3]={{10,20,30},{40,50,60}};
}
```
## step02_2_接下來,把二維陣列拿來用, 配合2層迴圈,超完美。口訣還是「左手i、右手j
```cpp
#include <stdio.h>
int main()
{
    int a[2][3]={{10,20,30},{40,50,60}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## step03-1_「矩陣加法」也就是典型的 二層迴圈+陣列, 口訣還是左手i右手j
```cpp
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d  ",c[i][j]);
        }
        printf("\n");
    }
}
```
## step03-2_矩陣乘法
```cpp
#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]+=a[i][j]*b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d  ",c[i][j]);
        }
        printf("\n");
    }
}

```
# week12
## step01-1_實習課的題目「買賣股票的最佳時機」,不能找陣列的最大值、最小值, 因為可能買到最貴、賣到最便宜,反而虧最多錢。「左手i右手j」來暴力搜尋,找到右手最大、左手最小的時機點, 便是答案
```cpp
#include <stdio.h>
int main()
{
	int a[21]={0},n,max,min;
	int ans=0;
	scanf("%d",&n);
	printf("請按任意鍵繼續 . . . \n");
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
	printf("最大利潤=%d-%d=%d\n",max,min,ans);
}
```
## step02-1_Fibonacci數列,重點就是 a[i] = a[i-1] + a[i-2]; 接著for迴圈要從2開始, 不然a[i-2]會有負數在裡面而出錯。在 a[0] a[1] 也要先手動填好。最後全部印出來(不要印太多, 不然會overflow爆炸)
```cpp
#include <stdio.h>
int main()
{
    int a[50];
    a[0]=0;
    a[1]=1;

    for(int i=2;i<45;i++){
        a[i]=a[i-1]+a[i-2];
    }

    for(int i=0;i<45;i++){
        printf("%d ",a[i]);
    }
}
```
## step02-3_矩陣轉180度
```cpp
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
```
## step03-1_function函式, int addnum(int a, int b){return a+b;} 在第一行,要return出來的形狀, 也要有送進去的形狀,不能省略。用的時候就簡單給數字進去就好了
```cpp
#include <stdio.h>
int addnum(int a,int b)
{
    return a+b;
}
int main()
{
    int ans=addnum(2,3);
    printf("addnum(2,3)會得到 %d\n",ans);
}
```
# week14
## step01-1_為了解變數的範圍,我們先用最簡單的, 在外面有個變數 int a=10; 在兩個函式中,如果修改到, 就會改到同一個變數
```cpp
#include <stdio.h>
int a=10;
void func()
{
    a=30;
    printf("func()中 a改成:%d\n",a);
}

int main()
{
    printf("main()中 a是:%d\n",a);
    func();
    printf("main()中 a是:%d\n",a);
}
```
## step01-2_在外面宣告的 int a=10; 是global變數,全世界看得到。void func() 裡宣告的 int a=20; 是 local 變數。local變數的修改,不會動到global變數。
```cpp
#include <stdio.h>
int a=10;
void func()
{
    int a=20;
    printf("func()中裡的a改是:%d\n",a);
    a=30;
    printf("func()中 a改成:%d\n",a);
}

int main()
{
    printf("main()中 a是:%d\n",a);
    func();
    printf("main()中 a是:%d\n",a);
}
```
## step02-1_函式的參數傳遞時, 請用上週教過的「教室有門,上面用透明膠膜封起來,有標籤int n」進來的數值20, 就會 int a=20 的意思。變數的名字,在不同的函式裡可能會弄混,要小心一下
```cpp
#include <stdio.h>
int n=30;
int funcA(int a,int b)
{
    printf("funcA()的a,b是:%d %d\n",a,b);
    return a + b;
}

int funcB(int n)
{
    printf("funcB()的n是:%d\n",n);
    int ans = funcA(n,n);
    return ans;
}

int main()
{
    int a=10,b=20;
    funcB(b);
    funcA(a,b);
    printf("main()的a,b是:%d %d\n",a,b);
}
```
## step02-3_利用函式呼叫函式的方式, 來計算「輾轉相除法」,
### 使用我們自己定義的 int gcd(int a, int b) 裡面如果a是0,b是答案。如果b是0,a是答案。如果都不是, 那就再請 gcd出馬, 計算 gcd(b, a%b) 的結果 return 回去
```cpp
#include <stdio.h>

int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0)return a;

    return gcd( b, a%b );
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int ans = gcd(a,b);
    printf("%d",ans);
}
```
