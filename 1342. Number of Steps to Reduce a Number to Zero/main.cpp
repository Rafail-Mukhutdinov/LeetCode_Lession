#include <iostream>

/* 
Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.

Шаг 1) 14 четно; делим на 2 и получаем 7.
Шаг 2) 7 нечетное; вычесть 1 и получить 6.
Шаг 3) 6 четно; делим на 2 и получаем 3.
Шаг 4) 3 нечетно; вычесть 1 и получить 2.
Шаг 5) 2 четно; делим на 2 и получаем 1.
Шаг 6) 1 нечетное; вычесть 1 и получить 0.

 */


int numberOfSteps(int num){
    int counter = 0;
    while (num != 0)
    {
      if(num % 2 == 0){
        num = num / 2;
      }else{
        --num;
      }
        counter++;
    }
    return counter;
}

int main(){

    std::cout << "Output: " << numberOfSteps(14) << std::endl;
    std::cout << "Output: " << numberOfSteps(8) << std::endl;
    std::cout << "Output: " << numberOfSteps(123) << std::endl;
}
