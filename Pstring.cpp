#include "Pstring.h"

bool Pstring::isPalindrome(std::string word)
{
    
    int size = word.size();
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