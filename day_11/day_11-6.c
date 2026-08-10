// print a right aligned triangle of stars
#include <stdio.h>
int main(){
	int i = 1;
	int n = 5;
	int l = 5;
	while(i <= n){
		int v = 1;
		l = 5;
		while(l >= i){
			printf(" ");
			l--;
		}
		while(v <=i){
			printf("*");
			v++;
		}
		printf("\n");
		i++;
	}




	return 0;
}
