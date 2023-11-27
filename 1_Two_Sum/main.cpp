#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    // Более быстрый способ
    std::unordered_map<int, int> _map;
   for(int i = 0; i < nums.size(); i++){
       int num = nums[i];
       int complement = target - num;
       auto it =_map.find(complement);
       if(it != _map.end()){
           return {it -> second, i};
       }
       _map[num] = i;
   }
    return {};
    
/*  Медленный способ   
std::vector<int> sum;
    int size = nums.size();
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if ((target == nums[i] + nums[j]))
            {
                sum.push_back(i);
                sum.push_back(j);
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    return sum; */
}

void Print(std::vector<int> &num, int target)
{
    int counter = 1;
    std::vector<int> sum = twoSum(num, target);
    // Output: [0,1]
    std::cout << "Output: [";
    int size = sum.size();
    for (const auto &item : sum)
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
    std::vector<int> num0{2, 7, 11, 15}; // = 9
    std::vector<int> num1{3, 2, 4};      // = 6
    std::vector<int> num2{3, 3};         // = 6
    std::vector<int> num3{3, 2, 3};      // = 6
    std::vector<int> num4{2, 5, 5, 11};  // = 10

    Print(num0, 9);
    Print(num1, 6);
    Print(num2, 6);
    Print(num3, 6);
    Print(num4, 10);
}
