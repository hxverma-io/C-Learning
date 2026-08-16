#include <stdio.h>
int main(){
    int arr[6] = {10, 25, 7, 42, 18, 3};
    int i = 1;
    int length = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0];
    while(i < length){
        int pack = arr[i];
        if(first < pack ){
            first = pack;
        }
        i++;
    }
    printf("%d " , first);



    return 0;
}
