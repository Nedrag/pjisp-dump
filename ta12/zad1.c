#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c;
    float s, p;

    scanf("%f%f%f", &a,&b,&c);

    s = (a+b+c)/2;
    p = sqrt((s-a)*(s-b)*(s-c)*s);

    printf("P = %.2lf \n",p);

}