#include <stdio.h>

int main(){

    int n, i, e, sum, sumw;
    scanf("%d%d", &n, &e);

    switch (e)
    {
    case 1:
        sum = 0;
        for(i = 0; i <= n; i++){
            
            sum += i;
        }
        printf("%d", sum);
        break;
    
    default:
        sumw =0;
        while (i <= n)
        {
            sumw += i;
            i++;
        }

        printf("%d", sumw);
        break;
    }


    
}