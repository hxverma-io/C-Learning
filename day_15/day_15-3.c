//write a function that print 1 if n is prime and 0 if not
#include <stdio.h>
int isPrime(int a ){
    int i = 1;
    int count = 0;
    while(i <= a){
        if(a % i == 0){
            count ++;
        }
        i++;
    }
    if(count == 2){
        
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int result = isPrime(2);
    printf("%d" ,result);
    
}