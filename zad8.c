#include <stdio.h>

int main(){
    //mnozenje
    int n,m,prod,kol;
    int i = 0 ;
    int dim;
    scanf("%d%d%d", &n, &m , &dim );

    switch(dim){
        case 1:
            while (i < m)
            {
                prod += n; 
                i++; 
            }
            printf("%d", prod);
            break;
        default:
            if(m > n){
                while(i <= m){
                    m -= n ;
                    i++;
                    kol = i;
                }
            }else{

                while(i <= n){
                    n -= m ;
                    i++;
                    kol = i;
                }
            }
            printf("%d", kol);
            break;
    }



}