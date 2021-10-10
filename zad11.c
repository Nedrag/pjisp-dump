#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int i = 1;

    do{
        if(N%i == 0){
            printf("%d ", i);
        }
        i++;
    }while(i <= N/2);
}