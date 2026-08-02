#include <stdio.h>
#include <string.h>
int main(){
	float a = 0.0; // Declaration
	float b = 0.0; // Declaration
	int choice = 0; // Declaration
	int option = 0;
	
	
while(1){
	printf("==========================\n");
	printf("=====Simple Calculator====\n");
	printf("==========================\n\n");

	printf("Choose an Operation\n\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit \n\n");

	

	printf("Choose your option 1-5\n\n");
	scanf("%d" , &choice);

	if(choice == 5){
		printf("Exit\n");
		break;	
		
	}
	if(choice < 1 || choice > 5){
			printf("Invalid Choice\n");
			break;
		}

	printf("You selected : %d\n\n" , choice );
	printf("Enter your first number : \n");
	scanf("%f" , &a);
	printf("Enter your second number : \n");
	scanf("%f" , &b);

	

	switch(choice){
		case 1:
		printf("%f" , a + b);
		break;
		
		case 2:
		printf("%f" , a - b);
		break;

		case 3:
		printf("%f" ,  a * b);
		break;

		case 4:
		printf("%f" , a / b);
		break;

		default:
			printf("Invalid choice");
		
		
	}

	printf("\nDo you want to perform another calculation\n");
	printf("Yes : 1\n");
	printf("No : 2\n");
	scanf("%d" , &option);
	
	if(option == 1){;
		continue ;
	}else{
		
		break;
	}
	
	
	
	
	

	
	



	
}





	return 0;
}
