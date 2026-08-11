//function that returns tha smalles of three numbers
#include <stdio.h>
	int min(int a , int b , int c){
		if( a < b && a < c){
			return a;
		}else if(b < a &&  b < c){
			return b;
		}else{
			return c;
		}
	}
int main(){
	int result = min(4 ,2 ,7 );
	printf("%d" ,result);




	return 0;
}
