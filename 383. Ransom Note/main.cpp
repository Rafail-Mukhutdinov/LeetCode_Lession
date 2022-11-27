#include <iostream>
#include <unordered_map>

bool canConstruct(std::string ransomNote, std::string magazine)
{
    if (ransomNote.length() > magazine.length())
        return false;

    std::unordered_map<char, int> m;

    for (const auto &item : magazine)
    {
        m[item]++;
    }

    for (const auto &item : ransomNote)
    {

        if (!m[item]--)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    std::cout << "Exit loop enter X" << std::endl;
    std::string ransomNote, magazine;
    while (ransomNote != "X" && magazine != "X")
    {       
        std::cin >> ransomNote >> magazine;
        std::cout << std::boolalpha;
        std::cout << "Output: " << canConstruct(ransomNote, magazine) << std::endl;
    }


}
