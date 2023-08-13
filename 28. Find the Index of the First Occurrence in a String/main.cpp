#include <iostream>
#include <string>


int strStr(std::string haystack, std::string needle) {

        // size of needle
        int n = needle.size();

        // iterate over haystack to pick each element and 
        // check if the word starts from it's index.
        for(int i = 0; i < haystack.size(); i++)
        {
            int j =0; // this will hold index of the needle elem
            int k = i; // this will start from i and move forward with j
            //this while loop iterates over needle to check if all
            //its elem match with the word starting from i in the haystack.
            while(haystack[k] == needle[j] && j<n)
            {
                k++; j++; // we move forward on both vectors till needle ends
            }
            // if j == n then the needle matches in haystack
            // we return i from where the word started
            if(j == n) return i;
        }
        // if word not found
        return -1;
}

int main()
{

    {
        std::string haystack = "sadbutsad", needle = "sad";
        std::cout << strStr(haystack, needle) << std::endl;
    }

    {
        std::string haystack = "leetcode", needle = "leeto";
        std::cout << strStr(haystack, needle) << std::endl;
    }

    {
        std::string haystack = "hello", needle = "ll";
        std::cout << strStr(haystack, needle) << std::endl;
    }

    {
        std::string haystack = "aaaaa", needle = "bba";
        std::cout << strStr(haystack, needle) << std::endl;
    }

    {
        std::string haystack = "mississippi", needle = "issip";
        std::cout << strStr(haystack, needle) << std::endl;
    }


return 0;
}

/*
    int text_1 = haystack.length();
    int text_2 = needle.length();

    if(text_1 < text_2) return -1;
    bool flag = true;
    int counter = 0;
    int start = 0;
    for(int i = 0; i < text_1; i++){

        if(counter == text_2) return start;

        if(haystack[i] == needle[counter]){
            counter++;
            if(flag){
                start = i;
                flag = false;
            } 
        }else{
           if(counter > 0) return -1;
        }    
    }
    if(counter == 0) return -1;
return start;
*/