#include <stdio.h>


long fat(long x){
    return x != 1 ? x * fat(x-1) : 1;
}


int main(){

    long p = fat(2);
    printf("fat(2)  -> %ld\n", p);
    
    p = fat(4);
    printf("fat(4)  -> %ld\n", p);

    p = fat(8);
    printf("fat(8)  -> %ld\n", p);

    p = fat(16);
    printf("fat(16) -> %ld\n", p);



}