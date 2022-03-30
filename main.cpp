// Programmers: Team 30 - Blake Moore Shaine O'Neal Conner Tash
// Lab 7
// Programmer to take a user's string input that and
// determine if that word is a palindrome. 
#include "Pstring.h"

using namespace std;

int main()
{
    std::string word;
    cout << "This is a palindrome-testing program. Enter a string to test: ";
    cin >> word;

    Pstring pally(word);

    if (pally.isPalindrome(word) == true)
    {
        cout << word << " is a palindrome" << endl;
    }
    else 
    {
        cout << word << " is not a palindrome" << endl;
    }
    
    return 0;
}