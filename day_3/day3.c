// Calculate and print the factorial of a given number.
#include <stdio.h>
int main(){
	int i = 0;
	int n = 7;
	int fact = 0;
	int sub = 1;
	while(i < 7){
		fact = n - i;
		sub = sub * fact ;		
		i++;
	}
	printf("%d " , sub);
	return 0;
}
