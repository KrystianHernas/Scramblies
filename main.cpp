#include "head.h"

// W tej wersji postaram siê zaimplementowaæ sprawdzenie,
//czy spacer wystarczy na okreœlon¹ przez u¿ytkownika iloœæ minut

int main()
{
    const std::string& st1 = inputString();
    const std::string& st2 = inputString();
    std::cout << std::boolalpha << scramble(st1, st2) << std::endl;
    return 0;
}   