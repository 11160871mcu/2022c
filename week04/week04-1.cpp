#include <stdio.h>
int main()
{
    int a=10;
    printf("a���ȬO%d\n",a);
    printf("a���b�a�O%d\n",&a);

    int b=20;
    printf("b���ȬO%d\n",b);
    printf("b���b�a�O%d\n",&b);

    int c=30;
    printf("c����%d\n",c);
    printf("c���b�a�O%d\n",&c);
}
