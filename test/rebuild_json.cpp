#include <fstream>
#include <iostream>
#include <json/json.h>
#include <typeinfo>

int main(int argc, char *argv[]) {
  // Check the number of parameters
  if (argc < 2) {
    // Tell the user how to run the program
    std::cerr << "Usage: " << argv[0] << " -f test.json" << std::endl;
    /* "Usage messages" are a conventional way of telling the user
     * how to run a program if they enter the command incorrectly.
     */
    return 1;
  }
  Json::Value root;
  Json::CharReaderBuilder rbuilder;
  // Configure the Builder, then ...
  std::string errs;
  std::ifstream config_doc(argv[2], std::ifstream::binary);
  bool parsingSuccessful =
      Json::parseFromStream(rbuilder, config_doc, &root, &errs);
  if (!parsingSuccessful) {
    // report to the user the failure and their locations in the document.
    std::cout << "Failed to parse configuration" << std::endl
              << errs << std::endl;
    return 0;
  }

  // ...

  Json::StreamWriterBuilder wbuilder;
  // Configure the Builder, then ...
  std::string outputConfig = Json::writeString(wbuilder, root);
  std::cout << outputConfig << std::endl;
}
