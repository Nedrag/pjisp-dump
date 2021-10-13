#include <stdio.h>


#define MAX_SIZE 20



int main(){
    int i, n, a[MAX_SIZE];

    do{
        printf("Unesite broj elemenata niza: ");
        scanf("%d", &n);
    }while(n >= MAX_SIZE || n < 0);

    for(i = 0; i < n; i++){
        printf("Niz[%d] = ", i);
        scanf("%d", &a[i]);

    }
    printf("[ "); 
    
    for(i =0 ; i < n; i++){
        if(i > 0){
            printf(",");
        }
        printf("%d", a[i]);


    }
    printf(" ]");

    int min_inx, j, temp;

    for(i = 0; i < n-1; i++){
        min_inx = i;
        for( j = i +1; j < n; j++){
            if(a[min_inx] < a[j]){
                min_inx = j;
            }

        }
        temp = a[i];
        a[i] = a[min_inx];
        a[min_inx] = temp;
    }
    printf("[ "); 
    
    for(i =0 ; i < n; i++){
        if(i > 0){
            printf(",");
        }
        printf("%d", a[i]);


    }
    printf(" ]");
}

