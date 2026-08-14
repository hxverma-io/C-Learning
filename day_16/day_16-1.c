//write a function that returns factorial of n
#include <stdio.h>
int factorial(int n ){
    int number = n;
    int result = 1;
    while(number >= 1){
        result = result * number;
        number --;
    }
    return result;
}
int main(){ 

    int answer = factorial(5);
    printf("%d" , answer);


    return 0;
}