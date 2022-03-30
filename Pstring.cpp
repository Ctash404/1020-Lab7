#include "Pstring.h"

bool Pstring::isPalindrome(std::string word)
{
    int size = word.size();     // Variable to for the size of word

    // Loop to check if each letter of the word is equal to its 
    // oppisite.
    for (int i = 1; i <= size; ++i)
    {
        if (word[i - 1] != word[size - i]) 
        {
            return false;
        }
    }
   return true;
}