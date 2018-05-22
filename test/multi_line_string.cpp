#include <iostream>

int main() {
  const char *text = "This text is pretty long, but will be \n"
                     "concatenated into just a single string. \n"
                     "The disadvantage is that you have to quote \n"
                     "each part, and newlines must be literal as \n"
                     "usual.\n";

  const char *text1 = "This text is pretty long, but will be \n\
concatenated into just a single string. \n\
The disadvantage is that you have to quote \n\
each part, and newlines must be literal as \n\
usual.\n";

  std::cout << text << std::endl;
  std::cout << text1 << std::endl;
}
