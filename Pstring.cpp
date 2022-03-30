#include "Pstring.h"

bool Pstring::isPalindrome(std::string word)
{
    int size = word.size();     // Variable to for the size of word

    // Loop to check if each letter of the word is equal to its 
    // oppisite.
    for (int i = 0; i < size; ++i)
    {
        int k = i - 1;
        if (word[i] == word[size - k]) 
        {
            return true;
        }
    }
   return false;
}