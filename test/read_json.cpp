#include <fstream>
#include <iostream>
#include <json/json.h>

int main() {
  Json::Value root;

  std::ifstream config_doc("output.json", std::ifstream::binary);
  config_doc >> root;
  for (unsigned int i = 0; i <= 10; i++) {
    /*
     */
    std::cout << i << std::endl;
  }
  std::cout << root << std::endl;
}
