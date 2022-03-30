#ifndef PSTRING_H_
#define PSTRING_H_
#include <iostream>
#include <string>

class Pstring : private std::string
{
    private:
        std::string word {""};
    public:
        Pstring() = default;
        Pstring(std::string word) : word{word} {}
        std::string getWord();
        
        bool isPalindrome(std::string word);
};


#endif