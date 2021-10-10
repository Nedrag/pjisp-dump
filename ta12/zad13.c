#include <stdio.h>

int main(){
    int a, b, c;
    for(int i = 100; i < 1000; i++){

        a = i%10;
        b = (i%100 - a)/10;
        c = (i - b)/100;

        if( i == ((a*a*a) + (b*b*b) + (c*c*c))){
            printf("Armstrongov broj: %d \n", i);
        }

    }
}