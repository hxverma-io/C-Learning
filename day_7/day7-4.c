//Find the largest digit in the given number

	#include <stdio.h>
	int main(){
		long int n = 8462037519;
		int high = n % 10;
		n = n/ 10;
		int digit;
		while(n > 0){
			digit = n % 10;
			if(high < digit){
				high = digit;
			}
			n = n/ 10;
		}
		printf("%d " , high);





		return 0;
	}
