#include <stdio.h>

int subt(int a, int b){
    return a - b;
}

int main(){

    int p = subt(2, 2);
    printf("%d\n", p);
    
    p = subt(4, 2);
    printf("%d\n", p);

    p = subt(8, 3);
    printf("%d\n", p);

    p = subt(-2, 2);
    printf("%d\n", p);

    p = subt(-2, -2);
    printf("%d\n", p);

}