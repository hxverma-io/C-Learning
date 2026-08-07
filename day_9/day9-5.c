// Print all numbers between 1 and be that are divisible by 7
#include <stdio.h>
int main(){
	int first = 23;
	int second = 98;
	int n = 7;
	for(first = 23; first <=98 ; first++){
		if(first % 7 == 0){
			printf("%d " ,first);
		}
	}



	return 0;
}
