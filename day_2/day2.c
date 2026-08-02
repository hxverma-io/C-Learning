#include <stdio.h>
int main(){
	float valueone = 0;
	float valuetwo = 0;
	int choose =  0;
	int sum;
	int multiply;
	int devide;
	int minus;
 	// decleration is here 

 	printf("===================================== \n");
 	printf("==============Calculator============= \n");
 	printf("===================================== \n");
 	// print head

	printf("Write a number here :  ");
 	scanf("%f" , &valueone);
 	printf("Write second number here :  ");
 	scanf("%f" , & valuetwo);

 	printf("write 1 for : ADD \n");
 	printf("write 2 for : MINUS \n");
 	printf("Write 3 for : MULTIPLY \n");
 	printf("Write 4 for : DEVIDE \n");

 	scanf("%d" , &choose);

 	if(choose == 1){
 		printf("%f\n" , valueone + valuetwo);
 	}else if(choose == 2){
 		printf("%f\n" , valueone - valuetwo);
 	}else if(choose == 3){
 		printf("%f\n" , valueone * valuetwo);
 	}else if(choose == 4){
 		if(valuetwo != 0){
 			printf("%f\n" , valueone / valuetwo);
 		}else{
 			printf("Error ! Cannot devide by 0 \n");
 		}
 	}else{
 		printf("Try again\n ");
 	}
 	


	return 0;
}

