#include<stdio.h>

float getnumber(){
	float number;
	
	//checks if the number enters is a number
	while(1){
		if(scanf("%f", &number)==1){
			return number;
		}
		printf("Invalid input! Please enter a number again: ");
		while(getchar() != '\n');
	}
}

int main(){
	float num1,num2,result;
	char operation;
	char choice;
	
do{
   printf("\n****************************************\n");

    // enter first number
    printf("Enter first number: ");
       num1 = getnumber();

    //enter operation
    printf("Enter operation:");
    scanf(" %c", &operation);

    //control statement (switch) for the operation
    switch(operation) {
    case'+':printf("Enter second number: ");
            num2 = getnumber();
            result = num1 + num2;
            printf("Result= %.2f\n", result);
             break;
   case'-':printf("Enter second number: ");
           num2 = getnumber();
           result= num1-num2;
           printf("Result= %.2f\n", result);
	       break;
    case'*':printf("Enter second number: ");
            num2 = getnumber();
             result= num1*num2;
           printf("Result= %.2f\n", result);
	    	break;
    default: printf("Invalid operation\n");
	       
}

//asks the user if he wants to continue
  printf("\n\nPress n or N for next calculation or any button to close the application ");
  scanf(" %c", &choice);
  
} while(choice== 'n' || choice== 'N');

//end of program
printf("Calculator Closed");

}
