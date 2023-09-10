#include<iostream>
#include<stdio.h>
#include<string.h>

// TASK1
// Number guessing game 
//Create a program that generates a random number 
//asks the user to guess it.Provide feedback on whether the guess is too high or too low 
//until the user guesses the correct number.

void number_guessing_game()
{
	std::cout << "Hello! \n I've selected a number from 1-100";
	std::cout << "Lets see if you can you guess it?\n";

	int target_number = (rand() % 100) + 1;
	bool selected_correctly = false;
	int user_guess;

	while (!selected_correctly) {

		std::cout << "\nEnter your guess: ";
		std::cin >> user_guess;

		if (target_number == user_guess)
		{
			selected_correctly = true;
			std::cout << "Great!!  You've guessed the number correctly.\n";
		}
		else if (target_number > user_guess)
			std::cout << "Your guess is too low try again.\n";
		else
			std::cout<< "Your guess is too high try again.\n";
	}

}

int main()
{
	number_guessing_game();
	return 0;
}
