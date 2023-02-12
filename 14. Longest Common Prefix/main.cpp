#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string> &strs)
{
    std::string minText;
    int count = 0;
    int size = strs.size();
    int min = 0; // Находим минимальную строку
    for (int i = 0; i < size; i++)
    {
        if (strs[i].size() < min || min == 0)
        {
            min = strs[i].size();
            minText = strs[i];
        }
    }

    for (int i = 0; i < min; i++)
    {
        for (int y = 0; y < strs.size(); y++)
        {
            if (strs[y][i] != minText[i])
                return minText.substr(0, count);
        }
        count++;
    }
    return minText.substr(0, count);
}

void Print(const std::vector<std::string> &strs, const std::string &prefix)
{
    int size = strs.size();
    std::cout << "Input: strs = [";
    for (auto const &item : strs)
    {
        if (--size > 0)
        {
            std::cout << "\"" << item << "\",";
        }
        else
        {
            std::cout << "\"" << item << "\"]" << std::endl;
        }
    }
    std::cout << "Output: "
              << "\"" << prefix << "\"" << std::endl;
}

int main(int, char **)
{

    {
        std::vector<std::string> strs = {"flower", "flow", "flight"};
        Print(strs, longestCommonPrefix(strs));
    }

    {
        std::vector<std::string> strs = {"dog", "racecar", "car"};
        Print(strs, longestCommonPrefix(strs));
    }
}
