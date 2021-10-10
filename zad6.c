#include <stdio.h>
#include <math.h>

int main(){

    float x, fx;
    scanf("%f", &x);

    if(x < 0){
        fx = -7;
    }else if( 0 <= x && x < 1){
        fx = powf(x, 0.25) + 4;

    }else if (1 <= x && x < 13){
        fx = 2*sqrtf(x) - 5;
    }else{
        fx = (x * x)/9;
    }

    printf(" f(x) = %f", fx);

    return 0;

}