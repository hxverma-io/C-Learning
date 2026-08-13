//Write a function that returns base raised to exp
#include <stdio.h>
int power(int base , int expo ){
    int result = 1;
    while(expo > 0){
        result = result * base;
        expo --;
    }
    return result ;
}
int main(){
    int answer = power(5, 3);
    printf("%d" , answer);


    return 0;
}