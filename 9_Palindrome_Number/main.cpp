#include <iostream>

bool isPalindrome(int x)
{
    
    if(x < 0 || x != 0 && x % 10 == 0){
        return false;
    }

    int rever = 0;
    while (x > rever)
    {
       rever = rever * 10 + x % 10;
       x = x / 10;
    }
    
    if(x == rever || x == rever / 10){
        return true;
    }
    
    return false;
}





int main(int, char **)
{
    std::cout << std::boolalpha;
    std::cout << "Output: " << isPalindrome(121) << std::endl; 
    std::cout << "Output: " << isPalindrome(-121) << std::endl; 
    std::cout << "Output: " << isPalindrome(10) << std::endl; 
    std::cout << "Output: " << isPalindrome(0) << std::endl;
    std::cout << "Output: " << isPalindrome(3) << std::endl;
    std::cout << "Output: " << isPalindrome(11) << std::endl;
    std::cout << "Output: "<< isPalindrome(313) << std::endl;

}
