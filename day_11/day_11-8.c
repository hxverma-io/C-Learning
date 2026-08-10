// Print stars in odd number
#include <stdio.h>
int main(){
	int i = 1;
	int n = 5;
	while(i <= n){
		int number = i * 2 -1;
		int v = 1;
		while(v <=number){
			printf("*");
			v++;
		}
		printf("\n");
		i++;
	}




	return 0;
}
