#include <iostream>
#include <string>

using namespace std;

/*Take a string from the user, check if any upper case alphabet exist.
Convert all upper case alphabets into lower case alphabets */

int main()
{
    string inputString, outputString;  // declare variables

    cout << "Enter the words : "; // prompting
    getline(cin, inputString); //store user input

    for (char c : inputString) // iterate through each character in the input string
    {
        if (isupper(c)) // check if the character is uppercase
        {
            c = tolower(c); // if it is, convert it to lowercase
        }
        outputString += c; // add the character to the output string
    }

    cout << outputString << endl; // print the output string

    return 0; // end program
}