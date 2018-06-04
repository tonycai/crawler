#ifndef MD5_H
#define MD5_H

#include <iostream>


struct MD5Context
{
    MD5Context() { Init(); }

    void Init();

private:
    std::string v = "a";

};

std::string MD5Transform(std::string v);

#endif /* !MD5_H */
