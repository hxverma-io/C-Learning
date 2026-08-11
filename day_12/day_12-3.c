#include <stdio.h>
int isEven(int n){
	if(n % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int result = isEven(5);
	printf("%d" ,result);




	return 0;
}
