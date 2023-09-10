#include<stdio.h>
#include<iostream>
#include<string.h>


//Task2
//Develop a calculator program that performs basic arithmetic operations 
//such as addition, subtraction, multiplication, and division.
//Allow the user to input two numbers and choose an operation to perform.

void calculator()
{
	float num1;
	float num2;
	int operation;
	int exit1 = 0;

	while (exit1 != 1)
	{
		std::cout << "\nEnter your two numbers\n";
		std::cout << "Number 1: ";
		std::cin >> num1;
		std::cout << "Number 2: ";
		std::cin >> num2;

		int j = 0;
		do {
			if (j > 0)
				std::cout << "\n\tINVALID INPUT!!!!";
			std::cout << "\npress 1 for addition\n";
			std::cout << "press 2 for subtraction\n";
			std::cout << "press 3 for multiplication\n";
			std::cout << "press 4 for division\n";
			std::cout << "Your choice:";
			std::cin >> operation;
			j++;
		} while (!(operation >= 1 && operation <= 4));
		

		if (operation == 1)
			std::cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2;
		else if (operation == 2)
			std::cout << "\n" << num1 << " - " << num2 << " = " << num1 - num2;
		else if (operation == 3)
			std::cout << "\n" << num1 << " * " << num2 << " = " << num1 * num2;
		else if (operation == 4)
			std::cout << "\n" << num1 << " / " << num2 << " = " << num1 / num2;

		int i = 0;
		do
		{
			if(i == 0)
				std::cout << "\nFor exiting press 1 else 0: ";
			else 
				std::cout << "\n\tINVALID INPUT\nFor exiting press 1 else 0: ";
			std::cin >> exit1;
			i++;
		} while (exit1 != 0 && exit1 != 1);
		
	}

}

int main()
{
	calculator();
	return 0;
}