#include <iostream>
#include <unordered_map>
#include <string_view>

int romanToInt(std::string s)
{
    int sumValue = 0;
    std::unordered_map<char, int> arrValue{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for (int i = 0; i < s.size(); i++)
    {
        if (arrValue[s[i]] < arrValue[s[i + 1]])
        {
            sumValue -= arrValue[s[i]];
        }
        else
        {
            sumValue += arrValue[s[i]];
        }
    }
    return sumValue;
}

/*
// Другой способ на чистом С
int romanToInt(std::string s)
{
        int ans = 0, num = 0;
        for (int i = s.size()-1; ~i; i--) {
            switch(s[i]) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            if (4 * num < ans) ans -= num;
            else ans += num;
        }
        return ans;  
}


*/

void Print(const std::string_view text, const int value)
{    
    std::cout << "Input: s = "
              << "\"" << text << "\"" << std::endl;
    std::cout << "Output: " << value << std::endl;
}

int main(int, char **)
{

    {
        // std::string = "III";
        std::string text;
        std::cin >> text;
        Print(text, romanToInt(text));
    }

    {
        // std::string = "LVIII";
        std::string text;
        std::cin >> text;
        Print(text, romanToInt(text));
    }

    {
        // std::string = "MCMXCIV";
        std::string text;
        std::cin >> text;
        Print(text, romanToInt(text));
    }
}
