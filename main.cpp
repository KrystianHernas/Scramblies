#include "head.h"

// W tej wersji postaram si� zaimplementowa� sprawdzenie,
//czy spacer wystarczy na okre�lon� przez u�ytkownika ilo�� minut

int main()
{
    const std::string& st1 = inputString();
    const std::string& st2 = inputString();
    std::cout << std::boolalpha << scramble(st1, st2) << std::endl;
    return 0;
}   