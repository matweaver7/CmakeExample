#include <iostream>
#include <math/math.h>

int main(int argc, char *arcgv[]) {
    std::cout << "Hello World2!" << std::endl;
    math mathHandler = math();
    std::cout << "4*4 = " << mathHandler.times(4,4) << std::endl;
    return 0;
}