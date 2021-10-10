#include <stdio.h>


int main(){
    int N, q;
    int i = 2;
    scanf("%d%d", &N, &q);
    while( i <= N){
        if(i%q == 0){
            printf("%d", i);
        }else{
            printf("\n");
        }
        i++;
    }
}