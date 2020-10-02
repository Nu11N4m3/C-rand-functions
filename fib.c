#include <stdio.h>


int fib(int x){
    if (x > 1){
        return fib(x-1) + fib(x-2);
    }else if(x == 1){
        return 1;
    }else{
        return 0;
    }
}


int main(){

    int p = fib(0);
    printf("fib(0)  -> %d\n", p);
    
    p = fib(1);
    printf("fib(1)  -> %d\n", p);
    
    p = fib(2);
    printf("fib(2)  -> %d\n", p);

    p = fib(3);
    printf("fib(3)  -> %d\n", p);

    p = fib(4);
    printf("fat(4)  -> %d\n", p);

    p = fib(5);
    printf("fat(5)  -> %d\n", p);

    p = fib(6);
    printf("fat(6)  -> %d\n", p);

    p = fib(7);
    printf("fat(7)  -> %d\n", p);



}