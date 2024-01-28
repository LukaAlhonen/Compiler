#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <iterator>
std::vector<std::string> tokenize(std::string str)
{
    std::vector<std::string> tokens;
    std::string token;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            tokens.push_back(token);
            token = "";
        } else {
            token += str[i];
        }
    }
    tokens.push_back(token);
    return tokens;
}
int 
main()
{
    struct Token {
        std::string type;
        std::string value;
    };

    std::string my_str = "";

    std::regex r("[a-zA-z]+");
    std::smatch m;
    auto words_begin = std::sregex_iterator(my_str.begin(), my_str.end(), r);
    auto words_end = std::sregex_iterator();

    for(std::sregex_iterator i = words_begin; i != words_end; i++) {
        std::smatch match = *i;
        std::cout << match.str() << std::endl;
    }

    return 0;
}
