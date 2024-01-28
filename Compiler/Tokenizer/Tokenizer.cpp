//
//  Tokenizer.cpp
//  Compiler
//
//  Created by Luka Alhonen on 28.1.2024.
//

#include "Tokenizer.hpp"

Tokenizer::Tokenizer()
{
    
}

std::vector<std::string> Tokenizer::tokenize(std::string input)
{
    // Token vector
    std::vector<std::string> tokens;
    
    // Regex to match keywords, variable names and operators 
    std::regex r("[a-zA-Z_]+[a-z-A-Z0-9]*|[+-=*/]|[\\[\\]\{\\}\\(\\)]");
    std::smatch m;
    auto words_begin = std::sregex_iterator(input.begin(), input.end(), r);
    auto words_end = std::sregex_iterator();
    
    for(std::sregex_iterator i = words_begin; i != words_end; i++) {
        std::smatch match = *i;
        tokens.push_back(match.str());
    }
    
    return tokens;
}
