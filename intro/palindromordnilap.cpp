#include <string>
#include <algorithm>
#include <iostream>

bool isPalindrome(const std::string & text)
{
    return (*std::mismatch(text.begin(), text.end(), text.rbegin()).first) == 0;
}

int main()
{
    std::cout << "Ala ma kota " << isPalindrome("Ala ma kota") << "\n";
    std::cout << "ala " << isPalindrome("ala") << "\n";
    std::cout << "kajak " << isPalindrome("kajak") << "\n";
    std::cout << "neveroddoreven " << isPalindrome("neveroddoreven") << "\n";
    std::cout << "abacada " << isPalindrome("abacada") << "\n";
    std::cout << "[Empty] " << isPalindrome("") << "\n";
    std::cout << "M " << isPalindrome("M") << "\n";
}