#include <stdio.h>

#define MAX_SIZE 30
int main(){
    int n, br, a[MAX_SIZE], i, counter;
    counter = 0;
    //unos br elemenata
    do{
        printf("Unesite broj elemenata: ");
        scanf("%d", &n);
        printf("Unesite broj : ");
        scanf("%d", &br);

    }while( n <= 0 || n > MAX_SIZE);
    //unos elemenata
    for( i = 0; i < n; i++){
        printf("Niz [%d] = ", i );
        scanf("%d", &a[i]);
    }

    //prikazivanje niza
    printf("[");
    for(i = 0; i < n;i++){
        if( i > 0){
            printf(", ");
        }
        printf("%d", a[i]);

    }
    printf("] \n");
    //ispisivanje broja koji trazimo u nizu
    printf("%d \n", br);
    //trazenje broja
    for(i =0 ; i < n; i++){
        if(br == a[i]){
            counter++;
        }
        
    }
    //ispisivanje kako se trazi
    printf("Broj %d se pojavljuje %d puta u nizu A = [", br, counter);
    for(i =0; i < n; i++){
        if(i > 0){
            printf(", ");
        }
        printf("%d", a[i]);
    }
    printf(" ]");

    return 0;;
}