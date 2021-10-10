#include <stdio.h>

int main(){

    float a, b, c;
    scanf("%f%f%f",&a,&b,&c);

    if(a < b){
        if( b <= c){
            printf("%f", a);
        }else{

            printf("%f", c);
        }
    }else{

        printf("%f", b);
    }

}