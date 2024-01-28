//
//  Tokenizer.hpp
//  Compiler
//
//  Created by Luka Alhonen on 28.1.2024.
//

#ifndef Tokenizer_hpp
#define Tokenizer_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <regex>

class Tokenizer{
private:
        
public:
    Tokenizer();
    std::vector<std::string> tokenize(std::string input);
};
#endif /* Tokenizer_hpp */
