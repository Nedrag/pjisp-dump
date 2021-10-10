#include <stdio.h>

int main(){
    int n;
    int fact = 1;
    scanf("%d", &n);
    int i = 1;
    do{
        fact *= i;
        i++;
    }while(i <= n);
    printf("%d", fact);

}