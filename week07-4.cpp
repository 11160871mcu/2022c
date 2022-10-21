#include <stdio.h>
int main(){
    int n=123456789;

    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
