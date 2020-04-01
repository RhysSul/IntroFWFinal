#include "ConsoleFW.h"

#include <iostream>


int foo()
{
	return 5;
}

void displayError(string error)
{
	cout << "ERROR: " << error << endl;
}

void printGeneralMessage(string message)
{
	cout << message << endl;
}

void printWinnerMessage(char winner)
{
	cout << "Winner for: " << winner << endl;
}

void printIntroduction(char PlayerName)
{
	cout << "Player: " << PlayerName << " enter your input. " << endl;
}

void promptForAxisInput(int boardDimension, char axis)
{
	cout << "Enter the " << axis << " pos [1-" << boardDimension << "].\n";
}

void drawBoard(string BoardLayout, int boardHeight, int boardWidth)
{
	if (boardHeight * boardWidth > BoardLayout.length()+1)
		return;

	for (int i = 0; i < (boardWidth*2)+1; i++)
		cout << "-";
	cout << endl;

	for(int i = 0; i < BoardLayout.length(); i++)
	{
		if (i % boardHeight == 0 && i != 0)
			cout << "|" << endl;
		cout << "|" << BoardLayout[i];
		
	}
	cout << "|" << endl;
	for (int i = 0; i < (boardWidth * 2) + 1; i++)
		cout << "-";
	cout << endl;
	return;
}