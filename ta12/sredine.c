#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%i%i%i", &a, &b, &c);
    int n = 3;

    
    printf("Aritmeticka sredina: %.2lf \n", ((float)(a+b+c)/(float)n));
    printf("Harmonijska sredina: %.2lf \n", ((1/(float)b + 1/(float)a + 1/(float)c)/(float)n));
    printf("Kvadratna sredina: %.2lf\n", (float)(sqrt(((a*a) + (b*b) + (c*c))/n)));
    printf("Geometrijska sredina: %.2lf \n", cbrtf((a*b*c)));
    return 0;
    
}