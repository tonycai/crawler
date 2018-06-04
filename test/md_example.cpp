#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h>
#include <iostream>
//#include <md5.h>

int main(int argc, char *argv[]) {

  CryptoPP::byte digest[CryptoPP::Weak::MD5::DIGESTSIZE];
  std::string message = "abcdefghijklmnopqrstuvwxyz";

  CryptoPP::Weak::MD5 hash;
  hash.CalculateDigest(digest, (const CryptoPP::byte *)message.c_str(), message.length());

  CryptoPP::HexEncoder encoder;
  std::string output;

  encoder.Attach(new CryptoPP::StringSink(output));
  encoder.Put(digest, sizeof(digest));
  encoder.MessageEnd();

  std::cout << output << std::endl;
}
