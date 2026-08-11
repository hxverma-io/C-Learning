// Function that return greater of two numbers
#include <stdio.h>
int max(int a , int b){
	if(a < b){
		return b;
	}else{
		return a;
	}
}
int main(){
	int result = max(20 , 25);
	printf("%d" , result);





	return 0;
}
