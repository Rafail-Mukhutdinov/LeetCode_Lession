#include <iostream>
#include <vector>



int searchInsert(std::vector<int>& nums, int target) {

    int size = nums.size();
    int counter = 0;

    for(int i = 0; i < size; i++){
        if(nums[i] < target) {
            counter++;
        }else return counter;
    }

    return counter;
}


int main(int, char**){

{
    std::vector nums = {1,3,5,6};
    int target = 5;
    std::cout << searchInsert(nums, target) << std::endl;
}

{
    std::vector nums = {1,3,5,6};
    int target = 2;
    std::cout << searchInsert(nums, target) << std::endl;
}

{
    std::vector nums = {1,3,5,6};
    int target = 7;
    std::cout << searchInsert(nums, target) << std::endl;
}






}
