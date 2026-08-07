//Print fibonacci series up to the required number
#include <stdio.h>
int main(){
	int i = 1;
	int a = 0;
	int b = 1;
	int c = 0;
	do{
		c = a + b;
		printf("%d " , a);
		a = b;
		b = c;
		
		
		i++;
		
	}while(i <= 12);
	




	return 0;
}
