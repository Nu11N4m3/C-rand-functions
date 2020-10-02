#include <stdio.h>


int power(int x, int y){
    int acumulador = 1;

    for(int i=0; i<y; i++){
        acumulador*=x;
    }

    return acumulador;
}


int main(){

    int p = power(2, 1);
    printf("%d\n", p);
    
    p = power(2, 2);
    printf("%d\n", p);

    p = power(2, 3);
    printf("%d\n", p);

    p = power(2, 4);
    printf("%d\n", p);

    p = power(2, 5);
    printf("%d\n", p);

}