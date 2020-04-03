#include <iostream>

#include "ConsoleFW.h"

/*
Specific function for drawing errors, if the console supported colour this could be expanded to print red
string error - error message to print
*/
void displayError(string error)
{
	cout << "ERROR: " << error << endl;
}
/*
General function for writing a message out to the console
string message - Message to output
*/
void printGeneralMessage(string message)
{
	cout << message << endl;
}
/*
Specific function for printing out the winner, could be expanded to support colour
char winner - symbol of the winner i.e "X"
*/
void printWinnerMessage(char winner)
{
	cout << "Winner for: " << winner << endl;
}
/*
General function for 2 player games to print out "Player PlayerName enter your input"
char PlayerName - single character representation of player name, i.e X
*/
void printIntroduction(char PlayerName)
{
	cout << "Player: " << PlayerName << " enter your input. " << endl;
}
/*
General function for displaying axis input request to the player, prints out:
"Enter the axis pos [1-boardDimension]."
int boardDimension - Dimension of the axis being processed
char axis - X or Y axis that is being taken in
*/

void promptForAxisInput(int boardDimension, char axis)
{
	cout << "Enter the " << axis << " pos [1-" << boardDimension << "].\n";
}
/*
Prints a board with borders, i.e
-------
|X|0|X|
|X|0|X|
|X|0|X|
-------
Scales to INT_MAX board height and width
string BoardLayout - The user sends in the layout of the board serlized to a string.
int BoardHeight - Used for correctly indexing board layout and drawing the lines
int BoardWidth - Used for correctly indexing board layout and drawing the lines

Fail condition of checking if the board height and width are greater than the board size to ensure for no invalid indexing.
*/
void drawBoard(string BoardLayout, int boardHeight, int boardWidth)
{
	if (boardHeight * boardWidth > BoardLayout.length() + 1)
	{
		displayError("Invalid Board Dimensions");
		return;
	}

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