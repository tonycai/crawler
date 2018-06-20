#include <string>
#include <iostream>
#include <regex>

using namespace std;

int main(int argc, char * argv[]) {
    string test = "#w%x&test replacing \"these characters\"";
    cout << test << endl;
    regex reg("[^\\w]+");
    test = regex_replace(test, reg, "_");
    cout << test << endl;
}
