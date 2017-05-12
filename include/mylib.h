#ifndef MYLIB_H
#define MYLIB_H

#include <string>


class Mylib {
    public:
        std::string something;
        Mylib(std::string something);
        std::string getSomething();
};
#endif
