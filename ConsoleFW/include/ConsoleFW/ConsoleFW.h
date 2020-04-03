#pragma once
#include <string>

using namespace std;
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
void drawBoard(string BoardLayout, int boardHeight, int boardWidth);
/* 
General function for 2 player games to print out "Player PlayerName enter your input"
char PlayerName - single character representation of player name, i.e X
*/
void printIntroduction(char PlayerName);
/*
General function for displaying axis input request to the player, prints out:
"Enter the axis pos [1-boardDimension]."
int boardDimension - Dimension of the axis being processed
char axis - X or Y axis that is being taken in
*/
void promptForAxisInput(int boardDimension, char axis);
/*
Specific function for drawing errors, if the console supported colour this could be expanded to print red
string error - error message to print
*/
void displayError(string error);
/*
General function for writing a message out to the console
string message - Message to output
*/
void printGeneralMessage(string message);
/*
Specific function for printing out the winner, could be expanded to support colour
char winner - symbol of the winner i.e "X"
*/
void printWinnerMessage(char winner);