#include <string>
#include <iostream>
#include <regex>

//using namespace std;

int main(int argc, char * argv[]) {
    std::string data = "Dagger        8     4       0";
    std::regex rule("(\\w+)\\s+(\\w+)\\s+(\\w+)\\s+(\\w+)");
    std::smatch match;
    if (regex_match(data, match, rule)) {
        std::cout << match[0] << std::endl << match[1] << "," << match[2] << "," << match[3] << "," << match[4] << std::endl;
    }
}
