// C++ Code Challenges, LinkedIn Learning

// Challenge #1: Checking for Palindromes
// Write a function to check if a string is a palindrome or not.
// Examples: civic, radar, level.

#include <iostream>
#include <algorithm>
#include <cwctype>
#include <vector>

// is_palindrome()
// Summary: This function receives a string and returns true if the string is a palindrome, false otherwise.
// Arguments:
//           str: The string to analyze.
// Returns: A boolean value. True for palindromes, false otherwise.
bool is_palindrome(std::string str){

    std::vector <char> cl;
    
    for (auto x : str) {
        if (!iswalnum(x)) {
            return false;
        }
        cl.push_back(tolower(x));
    }

    std::string org_s;
    for (auto x: cl) {
        org_s.push_back(x);
    }

    std::reverse(cl.begin(),cl.end());

    std::string new_s;
    for (auto x : cl) {
        new_s.push_back(x);
    }

    //std::cout << "Original: " << org_s << std::endl;
    //std::cout << "New: " << new_s << std::endl;
    return org_s == new_s;
}

// Main function
int main(){
    std::string s;
    std::cout << "Enter a string: " << std::flush;
    std::getline(std::cin,s);
    std::cout << "\n\"" << s << (is_palindrome(s) ? "\" is" : "\" is not" ) << " a palindrome.\n\n";
    return 0;
}
