//Check whether the given number is a palindrome :
#include <stdio.h>
int main(){
	int n = 12321;
	int temp = n;
	int junk = 0;
	int i = 1;
	while(n != 0){
		junk = n % 10;
		n = n / 10;
		
	}
	printf("%d Original \n" , temp );
	if(junk = temp){
		printf("palindrome : %d  " , junk);
	}else {
		printf("palindrome : %d : " , junk);
	}

	return 0;
}
