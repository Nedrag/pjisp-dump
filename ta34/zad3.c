#include <stdio.h>
#define MAX_SIZE 20
int main(){
   int a[5] = {2, 1, 4, 3, 5}; 
   int i ,n , b;
   n = sizeof(a)/sizeof(a[0]);

   int j, min_indx, temp;

   for(i = 0; i < n - 1 ; i++){
       min_indx = i;
       for( j = i + 1; j < n;j++){
           if(a[min_indx] < a[j]){
               min_indx = j;
            }
        }
        temp = a[i];
        a[i] = a[min_indx];
        a[min_indx] = temp;
    }
    printf("[ ");
    for(b = 0; b < n; b++){
        if( b > 0){
            printf(",");
        }
        printf("%d", a[b]);
    }
    printf("]");

    

}