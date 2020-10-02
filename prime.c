#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_prime(int num){
    int flag = TRUE;

    for(int i=2; i<num; i++){
        if(num % i == 0){
            flag = FALSE;
        }
    }

    return flag;
}


int main(){

    int p = is_prime(1);
    printf("%d\n", p);
    
    p = is_prime(2);
    printf("%d\n", p);

    p = is_prime(3);
    printf("%d\n", p);

    p = is_prime(4);
    printf("%d\n", p);

    p = is_prime(5);
    printf("%d\n", p);

    p = is_prime(7);
    printf("%d\n", p);

    p = is_prime(8);
    printf("%d\n", p);

}