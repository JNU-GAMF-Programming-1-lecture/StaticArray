/*
 * StaticArray.cpp
 * 
 * Example for the usage of static arrays.
 * 
 *****/

#include <iostream>   // Input and output stream.
#include <iomanip>    // Input/output manipulators for formatting.
#include <ctime>      // Date and time functions.

using namespace std;

// Program simulating dice roll.
int main()
{
	int DiceRolls[100] = { 0 };

	// Initialize the random number generator.
	srand(unsigned int(time(nullptr)));
	// Declare an array to count the number of occurences of the six possible cases.
	int T[6] = { 0 };
	for (auto i = 0; i < 100; i++)
	{
		// Dice roll.
		DiceRolls[i] = rand() % 6 + 1;
		// Print the result of the roll to the console.
		cout << i + 1 << " roll: " << DiceRolls[i] << endl;
		// Increase the value of that array element, which corresponds to 
		// the result of the current roll.
		switch (DiceRolls[i])
		{
		case 1: T[0]++;	break;
		case 2: T[1]++; break;
		case 3: T[2]++; break;
		case 4: T[3]++; break;
		case 5: T[4]++; break;
		case 6: T[5]++; break;
		}
		//Compact solution: T[DiceRolls[i] - 1]++;
	}
	// Create a two dimensional character array.
	char S[6][7] = { "ones","twos","threes","fours","fives","sixes" };
	cout << endl << endl;
	// Print the summarized result to the console.
	for (auto i = 0; i < 6; i++)
	{
		cout << "Number of " << S[i] << ": ";
		cout << T[i] << "\n";
	}
	cout << "\n\n";


	// Declare a 2D integer array b, modify one of its elements, 
	// and then print the elements in a 2D format.
	int b[2][3] = { {1,2,3},{4,5,6} };
	b[1][2] = 8;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << setw(3) << b[i][j];
		cout << endl << endl;
	}

	// Declare a one dimensional array with initialization. 
	// The number of necessary array elements are determined
	// from the values enlisted in the initialization.
	int c[] = { 1,2,3,4,5 };
	// Determine the number of array elements.
	size_t ArraySize = sizeof(c) / sizeof(c[0]);
	// Display the content of the array separated by commas.
	for (size_t i = 0; i < ArraySize; i++)
	{
		cout << c[i] << (i < ArraySize - 1 ? ", " : "\n");
	}
	return 0;
}
