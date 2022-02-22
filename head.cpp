#include "head.h"

bool scramble(const std::string& s1, const std::string& s2) {
    std::vector<int> q; q.resize(26);
    for (auto i : s1) {
        q[static_cast<int>(s1[i]) - static_cast<int>('a')]++;
    }
    for (auto i:s2) {
        q[static_cast<int>(s2[i]) - static_cast<int>('a')]--;
        if (q[static_cast<int>(s2[i]) - static_cast<int>('a')] < 0) 
            return false;
    }
    return true;
};

std::string inputString() {
    std::string temp; std::cout << "Input string: " << std::endl; std::cin >> temp;
    return temp;
}
