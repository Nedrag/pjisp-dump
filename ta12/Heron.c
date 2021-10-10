#include <stdio.h>
#include <math.h>

int main(){
    float s,P;
    float a,b,c ;
    scanf("%f%f%f", &a, &b, &c);
    s = (a+b+c)/2;
    P = sqrt(s*(s-a)*(s-b)*(s-c));
    printf(" S = %.2lf\n", s);
    
    printf("P = %.2lf\n", P);

    return 0;
}
