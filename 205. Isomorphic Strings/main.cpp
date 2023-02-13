#include <iostream>
#include <unordered_map>

bool isIsomorphic(std::string s, std::string t)
{

    std::unordered_map<char, char> s1, t2;
    for (int i = 0; i < s.size(); i++)
    {
        if (!s1.count(s[i]) && !t2.count(t[i]))
        {
            s1[s[i]] = t[i];
            t2[t[i]] = s[i];
        }
        else
        {
            if (s1[s[i]] != t[i] || t2[t[i]] != s[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main(int, char **)
{

    {
        std::string s = "egg";
        std::string t = "add";
        std::cout << std::boolalpha << isIsomorphic(s, t) << std::endl;
    }

    {
        std::string s = "foo";
        std::string t = "bar";
        std::cout << std::boolalpha << isIsomorphic(s, t) << std::endl;
    }

    {
        std::string s = "paper";
        std::string t = "title";
        std::cout << std::boolalpha << isIsomorphic(s, t) << std::endl;
    }

    {
        std::string s = "badc";
        std::string t = "baba";
        std::cout << std::boolalpha << isIsomorphic(s, t) << std::endl;
    }
}
