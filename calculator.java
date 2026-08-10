import java.util.Scanner;

public class calculator {

    // Method for getting a valid number
    public static float getNumber(Scanner input) {

        while (true) {

            if (input.hasNextFloat()) {
                return input.nextFloat();
            }

            System.out.print("Invalid input! Please enter a number again: ");
            input.next(); // Remove the invalid input
        }
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        float num1, num2, result;
        char operation;
        char choice;

        do {

            System.out.println("\n****************************************");

        //enter first number
            System.out.print("Enter first number: ");
            num1 = getNumber(input);

        //enter operation
            System.out.print("Enter operation: ");
            operation = input.next().charAt(0);
       
        //control statement(switch ) for operation
            switch (operation) {

                case '+':
                    System.out.print("Enter second number: ");
                    num2 = getNumber(input);

                    result = num1 + num2;
                    System.out.printf("Result = %.2f%n", result);
                    break;

                case '-':
                    System.out.print("Enter second number: ");
                    num2 = getNumber(input);

                    result = num1 - num2;
                    System.out.printf("Result = %.2f%n", result);
                    break;

                case '*':
                    System.out.print("Enter second number: ");
                    num2 = getNumber(input);

                    result = num1 * num2;
                    System.out.printf("Result = %.2f%n", result);
                    break;

                case '/':
                    System.out.print("Enter second number: ");
                    num2 = getNumber(input);
    
                // Check for division by zero
                    if (num2 != 0) {
                        result = num1 / num2;
                        System.out.printf("Result = %.2f%n", result);
                    } else {
                        System.out.println("Syntax Error: Cannot divide by zero");
                    }
                    break;
             
            // If the operation is not valid
                default:
                    System.out.println("Invalid operation");
            }

            // Ask the user if they want to perform another calculation
            System.out.print(
                "\nPress N or n for next calculation, or any other button to close: "
            );

        // Get the user's choice
            choice = input.next().charAt(0);

        } while (choice == 'n' || choice == 'N');

    // Close the scanner and print a closing message
        System.out.println("Calculator Closed");

        input.close();
    }
}