#include <iostream>
#include <vector>



std::vector<int> plusOne(std::vector<int>& digits) {
    
        int n=digits.size();
        digits[n-1]++;
        for(int i=n-1;i>=1;i--)
        {
            if(digits[i]>9)
            {
                digits[i]%=10;
                digits[i-1]++;
            }
        }
        if(digits[0]>9)
        {
            digits.insert(digits.begin(),1);
            digits[1]%=10;
        }
        return digits;
}

void Print(const std::vector<int> &nums/*, int index*/)
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
   // std::cout << "Output: " << index << std::endl;
}

int main()
{
{
    //Input: digits = [1,2,3]
    //Output: [1,2,4]
    std::vector<int> digits{1,2,3};
    Print(plusOne(digits));
}

{
    //Input: digits = [4,3,2,1]
    //Output: [4,3,2,2]
    std::vector<int> digits{4,3,2,1};
    Print(plusOne(digits));
}

{
    //Input: digits = [9]
    //Output: [1,0]
    std::vector<int> digits{9};
    Print(plusOne(digits));

}

{
    //Input: digits = [9]
    //Output: [1,0]
    std::vector<int> digits{9, 9};
    Print(plusOne(digits));

}

    return 0;
}
