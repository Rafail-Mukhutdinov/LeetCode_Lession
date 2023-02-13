#include <iostream>
#include <vector>
#include <numeric>

int pivotIndex(std::vector<int> &nums)
{
    if (nums.empty())
        return 0;
    // Получаем сумму вектора
    int sumVector = std::accumulate(nums.begin(), nums.end(), 0);

    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sumVector = sumVector - nums[i];
        if (sumVector == leftSum)
            return i;
        leftSum += nums[i];
    }
    return -1;
}

void Print(const std::vector<int> &nums, int index)
{

    // Input: nums = [1,7,3,6,5,6]
    // Output: 3
    int size = nums.size();
    std::cout << "Input: nums = [";
    for (auto const &item : nums)
    {
        if (--size > 0)
        {
            std::cout << item << ",";
        }else 
        {
            std::cout << item << "]" << std::endl;
        }
    }
    std::cout << "Output: " << index << std::endl;
}

int main(int, char **)
{
    {
        std::vector<int> nums = {1, 7, 3, 6, 5, 6};
        Print(nums, pivotIndex(nums)); 
    }

    {
        std::vector<int> nums = {1, 2, 3};
        Print(nums, pivotIndex(nums)); 
    }

    {
        std::vector<int> nums = {2, 1, -1};
        Print(nums, pivotIndex(nums)); 
    }
}
