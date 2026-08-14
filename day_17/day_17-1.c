//function that print the average of three numbers
#include <stdio.h>
int average(int a , int b , int  c){
    int sum = a + b + c;
    int result = sum / 3;
    return result;
}
int main(){
    int answer = average(22, 55 ,25);
    printf("%d " ,answer);
}