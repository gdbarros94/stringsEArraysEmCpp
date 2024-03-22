#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    std::string substr = str.substr(7, 5); // Começa no índice 7 e pega 5 caracteres
    printf("Substring: %s\n", substr.c_str());
    return 0;
}