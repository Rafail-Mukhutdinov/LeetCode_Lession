#include <iostream>
#include <vector>

std::vector<int> runningSum(std::vector<int> &nums)
{
    // Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
    for (int i = 1; i < nums.size(); ++i)
    {
        nums[i] += nums[i - 1];
    }
    return nums;

    /*
    // Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
    std::vector<int> sum;
    int summa;
    for(const auto& item: nums){
            summa += item;
            sum.push_back(summa);
    }
    return sum;
    */
}

void Print(std::vector<int> &num)
{
    int counter = 1;
    // Output: [1,3,6,10]
    std::cout << "Output: [";
    int size = num.size();
    for (const auto &item : runningSum(num))
    {
        std::cout << item;
        if (counter < size)
        {
            std::cout << ", ";
        }
        ++counter;
    }
    std::cout << "]" << std::endl;
}

int main(int, char **)
{

    std::vector<int> nums0{1, 2, 3, 4};
    std::vector<int> nums1{1, 1, 1, 1, 1};
    std::vector<int> nums2{3, 1, 2, 10, 1};

    Print(nums0); // Output: [1,3,6,10]
    Print(nums1); // Output: [1,2,3,4,5]
    Print(nums2); // Output: [3,4,6,16,17]
}
