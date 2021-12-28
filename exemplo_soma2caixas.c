#include <stdio.h>

int main(){

int h[10], b, j;

    for(int i=0; i<=10; i++){
        printf("\n");
        j = i+1;
        for(j; j<=10; j++){
            printf("\nb = h[%i] + h[%i]", i, j);
        }
    }

return 0;
}
