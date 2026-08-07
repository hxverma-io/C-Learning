//Create a menu driven Program that allows user to choose and perform different operation
#include <stdio.h>
int main(){
	int operation = 0 ;
	int num1 = 0;
	int num2 = 0;
	int option = 0;
	do{
		printf(" CALCULATOR \n\n");
		printf("1: Addition\n");
		printf("2: Subtraction\n");
		printf("3: Multiplication\n");
		printf("4: Division\n");
		printf("5: Exit\n");
		printf("Choose your operation : ");
		scanf("%d" , &operation);

		if(operation == 5){
			break;
		}else{
		
		}
		

		switch(operation){
			case 1:
			printf("You choose Addition\n");
			printf("\nEnter your first number : ");
			scanf("%d" , &num1);
			printf("Enter your second number : ");
			scanf("%d" , &num2);
			printf("%d + %d = %d\n\n" , num1 , num2 , num1 + num2);
			break;

			case 2:
			printf("You choose Subtraction\n\n");
			printf("Enter your first number : ");
			scanf("%d" , &num1);
			printf("Enter your second number : ");
			scanf("%d" , &num2);
			printf("%d - %d = %d\n\n" , num1 , num2 , num1 - num2);
			break;

			case 3:
			printf("You choose Multiplication\n\n");
			printf("Enter your first number : ");
			scanf("%d" , &num1);
			printf("Enter your second number : ");
			scanf("%d" , &num2);
			printf("%d * %d = %d\n\n" , num1 , num2 , num1 * num2);
			break;

			case 4:
			printf("You choose Division\n\n");
			printf("Enter your first number : ");
			scanf("%d" , &num1);
			printf("Enter your second number : ");
			scanf("%d" , &num2);
			if(num2 == 0){
				printf("Wrong Input");
				break;
			}
			printf("%d / %d = %d\n\n" , num1 , num2 , num1 / num2);
			break;

			default:
				printf("Invalid choice. Please choose between 1 and 5.");
				break;
			
			
		}
		printf("\n1: Use calculator again\n");
		printf("2: Exit");
		scanf("%d" , &option);
		if(option == 1){
			continue;
		}else{
			printf("\nThank you for using calculator.\n");
			break;
		}
		
	}while(1);




	return 0;
}
