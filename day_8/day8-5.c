//Print the sum of digits of the given number
#include <stdio.h>
int main(){
	int n = 0;
	int result = 0;
	scanf("%d" , &n); //135 
	int first = 0;
	do{
		first = n % 10; // 5 bana yaha pe  fir 3 reh gaya 
		result = result + first; // 0 plus 5 result 5 tha or 5 plus 3 eight ho gaye 
		n = n / 10; // ab 13 reh gaya  1 reh gaya 
	

		
	}while(n > 0 );
	printf("%d " , result);



	return 0;
}
