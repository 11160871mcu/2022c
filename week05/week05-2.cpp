#include <stdio.h>

bool isPalindrome(int x){
    if(x<0) return false;
    int r=0,x2=x;
    while(x>0){
        r=r*10+x%10;
        printf("x:%d r:%d\n",x,r);
        x=x/10;
    }
    if(r==x2)   return true;
    else return false;
}
int main()
{
    isPalindrome(121);
}
