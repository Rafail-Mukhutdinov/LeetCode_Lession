#include <iostream>

bool isSubsequence(std::string s, std::string t)
{
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(t[j++]==s[i]) i++;
        }
        if(i==s.length()) return true;
        return false;
}

int main(int, char **)
{
    {
        std::string s = "abc";
        std::string t = "ahbgdc";
        std::cout << std::boolalpha << isSubsequence(s, t) << std::endl;
    }

    {
        std::string s = "axc";
        std::string t = "ahbgdc";
        std::cout << std::boolalpha << isSubsequence(s, t) << std::endl;
    }

    {
        std::string s = "acb";
        std::string t = "ahbgdc";
        std::cout << std::boolalpha << isSubsequence(s, t) << std::endl;
    }

    {
        std::string s = "bb";
        std::string t = "ahbgdc";
        std::cout << std::boolalpha << isSubsequence(s, t) << std::endl;
    }
}
