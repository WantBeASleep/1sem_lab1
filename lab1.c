#include <stdio.h>

int operation(int n){
    return (n/10 - 2*(n%10));
}

int delimost(int n){
    if (n<0) n *= -1;
    while(n>100){
        n = operation(n);
    }
    if (n%7==0) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    if (delimost(n)) printf("%d Delitsya na 7\n", n);
    else printf("%d ne delitsya na 7\n", n);
    return 0;
}

