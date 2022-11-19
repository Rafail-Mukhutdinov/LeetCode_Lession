#include <iostream>
#include <vector>
#include <string>


 std::vector<std::string> fizzBuzz(int n) {
    // более быстрее чем через push_back()
    std::vector<std::string> result(n,"");
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0 ){
            result[i-1]="FizzBuzz";
        }else{
            if(i % 3 == 0){
                result[i-1] = "Fizz";
            }else{
                if(i % 5 == 0){
                    result[i-1] = "Buzz";
                }else{
                    
                    result[i-1] = std::to_string(i);
                }
            }
        }
    }
    return result;
 }

void Print(int number){
    //Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
    std::vector<std::string> exit_result = fizzBuzz(number);
     int counter = 1;
    // Output: [1,3,6,10]
    std::cout << "Output: [";
    int size = exit_result.size();
    for (const auto &item : exit_result)
    {
        std::cout << "\"" << item;
        if (counter < size)
        {
            std::cout << "\", ";
        }
        ++counter;
    }
    std::cout << "\"]" << std::endl;

}


int main() {

    Print(3);
    Print(5);
    Print(15);
}

/*
    std::vector<std::string> result;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0 ){
            result.push_back("FizzBuzz");
        }else{
            if(i % 3 == 0){
                result.push_back("Fizz");
            }else{
                if(i % 5 == 0){
                    result.push_back("Buzz");
                }else{
                    
                    result.push_back(std::to_string(i));
                }
            }
        }
    }
    return result;
*/