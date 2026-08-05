//Print all prime numbers between 1 and 100
#include <stdio.h>
int main(){
	int i = 2;
	int count = 0;
	while(i <= 100){
	count = 0;
	int n = 1;
		while(n <= 100){
			if(i % n == 0){
				count ++;
			}
			n++;
		}
		if(count == 2){
			printf("%d " , i);
		}
		i++;
	} 




	return 0;
}
