#include <iostream>

char board[3][3];

void printBoard()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << " | " << board[i][j] << " ";
			if (j == 2)
				std::cout << " | ";
		}
		std::cout <<"\n";
	}
}

bool check_for_win(char player)
{
	bool win = false;
	if (board[0][0] == player && board[0][1] == player && board[0][2] == player)
		win =  true;
	else if (board[1][0] == player && board[1][1] == player && board[1][2] == player)
		win =  true;
	else if (board[0][0] == player && board[0][1] == player && board[0][1] == player)
		win =  true;
	else if (board[0][0] == player && board[1][0] == player && board[2][0] == player)
		win = true;
	else if (board[0][1] == player && board[1][1] == player && board[2][1] == player)
		win = true;
	else if (board[0][2] == player && board[1][2] == player && board[2][2] == player)
		win = true;
	else if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
		win = true;
	else if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
		win = true;

	return win;
}

bool check_for_draw()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == ' ')
				return false;
		}
	}
	return true;
}


void TicTacToeGame()
{
	std::cout << "Current state of board:\n";
	printBoard();
	std::cout << "\n";

	while (1)
	{
		int row = 0;
		int column = 0;
		int i = 0;
		do {
			if (i > 0)
				std::cout << "\nINVALID INPUT!!!!!\n";
			std::cout << "Player 'O' Enter your move(row column)\n";
			std::cout << "Row: "; std::cin >> row;
			std::cout << "Column: "; std::cin >> column;
			i++;
		} while (
			(!((row <= 3 && row >= 1) && (column <= 3 && column >= 1)))
			|| board[row - 1][column - 1] != ' ');

		board[row - 1][column - 1] = 'O';
		printBoard();
		std::cout << "\n\n";

		if (check_for_win('O') == true)
		{
			std::cout << "\n\t****'O' WINS****\n";
			break;
		}

		if (check_for_draw() == true)
		{
			std::cout << ("\n\t## it's a draw ##");
			break;
		}


		i = 0;
		do {
			if (i > 0)
				std::cout << "\nINVALID INPUT!!!!!\n";
			std::cout << "Player 'X' Enter your move(row column)\n";
			std::cout << "Row: "; std::cin >> row;
			std::cout << "Column: "; std::cin >> column;
			i++;
		} while (
			(!((row <= 3 && row >= 1) && (column <= 3 && column >= 1)))
			|| board[row - 1][column - 1] != ' ');

		board[row - 1][column - 1] = 'X';
		printBoard();
		std::cout << "\n\n";
		
		if (check_for_win('X') == true)
		{
			std::cout << "\n\t****'X' WINS****\n";
			break;
		}
		if (check_for_draw() == true)
		{
			std::cout << ("\n\t## it's a draw ##");
			break;
		}
	}
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			board[i][j] = ' ';
	}
	TicTacToeGame();
	return 0;
}

