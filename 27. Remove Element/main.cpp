#include <iostream>
#include <vector>
#include <algorithm>


    int removeElement(std::vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }

  


int main(int, char**){
    
{
   // Input: nums = [3,2,2,3], val = 3
   // Output: 2, nums = [2,2,_,_]
    std::vector<int> val_arr = {3,2,2,3};
    int val = 3;
    int sum = removeElement(val_arr, val);
}

{
   // Input: nums = [0,1,2,2,3,0,4,2], val = 2
   // Output: 5, nums = [0,1,4,0,3,_,_,_]
    std::vector<int> val_arr = {0,1,2,2,3,0,4,2};
    int val = 3;
    int sum = removeElement(val_arr, val);
}


}
