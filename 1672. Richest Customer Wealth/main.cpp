#include <iostream>
#include <vector>

int maximumWealth(std::vector<std::vector<int>> &accounts)
{
    int sum = 0;
    int sum1 = 0;
    if (accounts.empty() != 0)
    {
        return 0;
    }

    for (int i = 0; i < accounts.size(); i++)
    {
        for (int j = 0; j < accounts[i].size(); j++)
        {
            sum += accounts[i][j];
        }
        if (sum > sum1)
        {
            sum1 = sum;
        }
        sum = 0;
    }
    return sum1;
}

void Print(std::vector<std::vector<int>> &account)
{
    std::cout << "Output: " << maximumWealth(account) << std::endl;
}

int main()
{
    std::vector<std::vector<int>> num;
    std::vector<std::vector<int>> num0{{1, 2, 3}, {3, 2, 1}};
    std::vector<std::vector<int>> num1{{1, 5}, {7, 3}, {3, 5}};
    std::vector<std::vector<int>> num2{{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};

    Print(num);
    Print(num0);
    Print(num1);
    Print(num2);
}
