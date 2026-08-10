//Print an increasing triangle of stars
#include <stdio.h>
int main(){
	int i = 1;
	int n = 5;
	while(i <= n){
		int v = 1;
		while(v <=i){
			printf("*");
			v++;
		}
		printf("\n");
		i++;
	}




	return 0;
}
