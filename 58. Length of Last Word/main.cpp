#include <iostream>


int lengthOfLastWord(std::string s) {

    int size_text = s.length();
    bool flag = true;
    int counter = 0; 

    for (int i = size_text-1; i >= 0; i--){
        
        if(' ' == s[i]){           
            if(!flag)  return counter;
        }else {            
            flag = false; 
            counter++;      
        }
    }

    return counter;
}


int main(int, char**){

{
    std::string s = "Hello World";
    std::cout << lengthOfLastWord(s) << std::endl;
}

{
    std::string s = "   fly me   to   the moon  ";
    std::cout << lengthOfLastWord(s) << std::endl;
}

{
    std::string s = "luffy is still joyboy";
    std::cout << lengthOfLastWord(s) << std::endl;
}

{
    std::string s = "a";
    std::cout << lengthOfLastWord(s) << std::endl;
}

}
