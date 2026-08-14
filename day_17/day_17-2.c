//Inset at the end
#include <stdio.h>
int main(){
    int arr[6] = {20,30,40,50,60};
    int n = 5;
    int length = sizeof(arr) / sizeof(arr[0]);
    arr[n] = 80;
    int i = 0;
    while(i < length){
        printf("%d " , arr[i]);
        i++;
    }





    return 0;
}