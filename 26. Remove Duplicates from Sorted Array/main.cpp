#include <iostream>
#include <vector>
// ----------------------------------------------------------------------------------
int removeDuplicates(std::vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    int counter = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[counter] != nums[i])
        {
            counter++;
        }
        nums[counter] = nums[i];
    }
    return counter + 1;
}
// ------------------------------------------------------------------------------------
int eraseValues(std::vector<int> &nums, const int number)
{
    for (std::vector<int>::iterator it = nums.begin() + number; it != nums.end();)
    {
        it = nums.erase(it);
    }
    return number;
}
// ------------------------------------------------------------------------------------
void Print(std::vector<int> &num)
{
    int counter = 1;   
    // Output: 2, nums = [1,2,_]
    std::cout << "Output: " << eraseValues(num, removeDuplicates(num)) << ","
              << " nums = [";
     int size =  num.size();        
    for (const auto &item : num)
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
// -------------------------------------------------------------------------------------
int main(int, char **)
{
    std::vector<int> nums1{1, 1, 2};
    std::vector<int> nums2{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    Print(nums1);
    Print(nums2);
}
