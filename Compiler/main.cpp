#include <iostream>
#include "Tokenizer/Tokenizer.hpp"

int main()
{
    Tokenizer tokenizer = Tokenizer();
    
    std::string my_str = "a = 1 \
    while 1 = 1 { \
        a = a + 1 \
    }";
    
    std::vector<std::string> tokens = tokenizer.tokenize(my_str);
    
    for(std::string token : tokens) {
        std::cout << token << std::endl;
    }
    
    return 0;
}
