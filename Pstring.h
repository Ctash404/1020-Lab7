#ifndef PSTRING_H_
#define PSTRING_H_
#include <iostream>
#include <string>

// Child class that pulls from the string parent class
class Pstring : private std::string
{
    private:
        std::string word {""};
    public:
        // Default constructor
        Pstring() = default;
        // Argument constructor
        Pstring(std::string word) : word{word} {}
        
        // Function to find palindrome
        bool isPalindrome(std::string word);
};


#endif