#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter a line with a custom delimiter: ";

    // Read the entire line
    std::getline(std::cin, input);

    // Use std::istringstream to process the line with a custom delimiter
    std::istringstream iss(input);

    std::string token;
    char customDelimiter = ','; // Change this to your custom delimiter

    while (std::getline(iss, token, customDelimiter)) {
        // Process each token
        std::cout << "Token: " << token << std::endl;
    }

    return 0;
}
