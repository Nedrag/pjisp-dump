#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int i = 2;

    while(i < n/2){
        if(n%i == 0){
            printf("Nije Prost \n");
            break;
        }else{
            printf("Prost");
            break;
        }
        i++;
    }
    
    
}