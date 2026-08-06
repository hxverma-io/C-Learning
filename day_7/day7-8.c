// check wether the given number is a palindrome.
#include <stdio.h>
int main(){
	int v = 25452;
	int n = 25452;
	int i = 1;
	int first = 0;
	int last = 0;
	do{
		first = n % 10;
		n = n /10;
		last = last * 10 + first;

		
		
			
		} while(n > 0);
		if(last == v){
			printf("%d is an palindrome" , last);
		}else{
			printf("%d is not an palindrome " , last)
		}
		
		
	


	return 0;
}

