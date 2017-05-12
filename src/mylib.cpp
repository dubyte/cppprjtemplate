#include "mylib.h"
#include <string>

using namespace std;

Mylib::Mylib(string something):something(something)
{}

string Mylib::getSomething() {
    return something;
}
