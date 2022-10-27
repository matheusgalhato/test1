
#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n){
    if(n<=2)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n;

    scanf("%i", &n);
    int Fibonacci();
    printf("%i",Fibonacci(n));
}
