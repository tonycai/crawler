#include <iostream>
#include <glog/logging.h>
 
int main(int argc, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    FLAGS_logtostderr = 0;
    FLAGS_log_dir="./log";
    LOG(INFO) << "This is an info  message";
    LOG(WARNING) << "This is a warning message";
    //LOG(ERROR) << "This is an error message";
    //LOG(FATAL) << "This is a fatal message";
    std::cout << "Done" << std::endl;
    return 0;
}
