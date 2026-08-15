// sum of array
#include <stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    int sum = 0;
    int i = 0;
    while(i < 5){
        printf("%d " , arr[i]);
        sum = sum + arr[i];
        i++;
    }
    printf("%d" , sum);





    return 0;
}