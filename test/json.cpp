#include <cstdlib>
#include <fstream>
#include <iostream>
#include "json/json.h"

/*
#ifndef JSON_IS_AMALGAMATION
#error "Compile with -I PATH_TO_JSON_DIRECTORY"
#endif
*/

int main(void) {
  //Json::CharReaderBuilder reader;
  Json::Reader reader;
  Json::Value root;
  //Json::StreamWriterBuilder writer;
  Json::StyledStreamWriter writer;
  std::string text = "{ \"first\": \"James\", \"last\": \"Bond\", \"nums\": [0, 0, 7] }";
  std::ofstream outFile;
  
  // Parse JSON and print errors if needed
  //reader.validate
  
  if(!reader.parse(text, root)) {
    std::cout << reader.getFormattedErrorMessages();
    exit(1);
  } else {
    
    // Read and modify the json data
    std::cout << "Size: " << root.size() << std::endl;
    std::cout << "Contains nums: " << root.isMember("nums") << std::endl;
    root["first"] = "Jimmy";
    root["middle"] = "Danger";
    
    // Write the output to a file
    outFile.open("output.json");
    writer.write(outFile, root);
    outFile.close();    
  }
  return 0;
}
