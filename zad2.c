#include <stdio.h>
#define MAX_SIZE 20
int main(){

    int a[MAX_SIZE], n, i, max;
    //broj elemenata
    do{
        printf("Unesite broj elemnata: ");
        scanf("%d", &n);
    }while(n <=  0 || n > MAX_SIZE);

    //unos niza 
    for(i =0 ; i < n; i++){
        printf("niz[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //ispisivanje niza
    printf("A = [");
    for(i =0 ; i < n; i++){
       if(i > 0){
           printf(", " );
       } 
       printf("%d", a[i]);

    }
    printf("] \n");

    //trazenje max
    max = a[0];
    for(i = 1; i < n; i++){
        if(max < a[i]){
            max = a[i];

        }

    }
    printf("Max = %d", max);
    return 0;

}