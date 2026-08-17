//Find name in array
#include <stdio.h>
#include <string.h>
int main(){ 
    char name[5][50] = {"Itachi" , "Aizen" , "Goku" , "Light" , "Obito"};
    int length = sizeof(name) /sizeof(name[0]);
    char namefound[50];
    int found = 0;
    scanf("%49s" , namefound);
    int i = 0;
    while(i < length){
        if(strcmp(name[i] , namefound) == 0){
            printf("%d : %s" , i+1 , name[i]);
            found ++;
        }
        i++;
    }
    if(found == 0){
        printf("Not found");
    }


    return 0;
}
