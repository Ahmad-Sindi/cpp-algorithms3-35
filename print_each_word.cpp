#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #35 Print Each Word in a String
 *
 * This program reads a full line of text from the user, then processes the string to extract and print each word on a separate line.
 *
 * The algorithm works by:
 * 1. Searching for a delimiter (space character).
 * 2. Extracting the substring (word) before the delimiter.
 * 3. Printing each extracted word individually.
 * 4. Removing the processed part of the string.
 *
 * This challenge strengthens string manipulation skills, delimiter-based parsing, and step-by-step algorithmic thinking.
 */

// Reads a full line of text from the user
string ReadString()
{
    string Text;
    cout << "Enter a string:\n";
    getline(cin, Text);
    return Text;
}

// Prints each word in the given string on a separate line
void PrintEachWordInString(string S1)
{
    string Delim = " "; // Delimiter used to separate words (space character)
    cout << "Your string words are:\n";

    short position = 0;
    string sWord; // Stores each extracted word

    // Loop to find and process each delimiter occurrence
    while ((position = S1.find(Delim)) != string::npos)
    {
        // Extract the word from the beginning up to the delimiter
        sWord = S1.substr(0, position);

        // Print the word if it is not empty
        if (sWord != "")
        {
            cout << sWord << endl;
        }

        // Remove the processed word and delimiter from the string
        S1.erase(0, position + Delim.length());
    }

    // Print the last word (after the final delimiter)
    if (S1 != "")
    {
        cout << S1 << endl;
    }
}

int main()
{
    PrintEachWordInString(ReadString());
    return 0;
}
