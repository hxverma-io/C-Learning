//Print square of each number from 1 to n
#include <stdio.h>
int main(){	
	int i =0;
	int n = 14;
	int result = 0;
	for( i = 1 ; i <=n ; i++){
		result = i * i;
		printf("%d x %d = %d\n" ,i , i ,result);
	}



	return 0;
}
