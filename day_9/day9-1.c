// Check wether the given number is a prime number
#include <stdio.h>
int main(){
	int i = 1;
	int n = 32;
	int count = 0;
	for(i = 1 ; i <= 37 ; i++){
		if(n % i == 0){
			count ++;
		}
	}
	if(count == 2){
		printf("%d" , n);
	}




	return 0;
}
