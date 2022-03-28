#include "Pstring.h"

int main()
{
    string word;
    cout << "This is a palindrome-testing program. Enter a string to test: ";
    cin >> word;

    isPalindrome(word);
/*
    if (isPalindrome(word) == true)
    {
        cout << word << " is a palindrome" << endl;
    }
    else 
    {
        cout << word << " is not a palindrome" << endl;
    }
    */
    return 0;
}