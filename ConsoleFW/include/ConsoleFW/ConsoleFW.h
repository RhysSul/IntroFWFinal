#pragma once
#include <string>

using namespace std;
int foo();
void drawBoard(string BoardLayout, int boardHeight, int boardWidth);
void printIntroduction(char PlayerName);
void promptForAxisInput(int boardDimension, char axis);
void displayError(string error);
void printGeneralMessage(string message);
void printWinnerMessage(char winner);