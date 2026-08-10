#include<stdio.h>
int main(){
	float num1,num2,result;
	char operation;
	char choice;
	
do{
scanf("%f",&num1);

printf("Enter operation:");
scanf(" %c", &operation);


switch(operation) {
case'+':scanf("%f",&num2);
        result = num1 + num2;
         printf("Result= %f\n", result);
         break;
case'-':scanf("%f",&num2);
        result= num1-num2;
         printf("Result= %f\n", result);
		 break;
case'*':scanf("%f",&num2);
        result= num1*num2;
        printf("Result= %f\n", result);
		break;
case'/':scanf("%f",&num2);
       if(num2!=0){
	    result= num1/num2;
	    printf("Result= %f\n", result);
	} else {
		printf("Syntax Error");
	}break;
default: printf("Invalid operation\n");
	       
}

  printf("\n\nDo you want to continue  ");
  scanf(" %c", &choice);
  
} while(choice== 'n' || choice== 'N');

printf("Calculator Closed");
}
