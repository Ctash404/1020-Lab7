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