#include <stdio.h>
int main(){
	int i = 1;
	int n = 4837;
	int temp = 0;
	int result = 1;
	while(i <= 4){
		temp = n % 10;
		n = n / 10;
		result = result * temp;
		i++;
		
		
	}
	printf("%d " , result);


	return 0;
}
