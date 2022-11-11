#include <iostream>

std::string removeDuplicates(std::string s)
{
    int n = s.length();
    std::string text;
    for (int i = 0; i < n; ++i)
    {
        if (!text.empty() && text.back() == s[i])
            text.pop_back();
        else
            text += s[i];
    }
    return text;
}

int main(int, char **)
{
    std::cout << removeDuplicates("abbaca") << std::endl;
    std::cout << removeDuplicates("azxxzy") << std::endl;
}
