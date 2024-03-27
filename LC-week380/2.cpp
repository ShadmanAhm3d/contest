#include <iostream>
#include <string>

bool isBeautiful(const std::string& s, const std::string& a, const std::string& b, int k, int i) {
    for (int j = 0; j < s.length() - b.length() + 1; ++j) {
        if (s.substr(i, a.length()) == a && s.substr(j, b.length()) == b && std::abs(i - j) <= k) {
            return true;
        }
    }
    return false;
}

int countBeautifulIndices(const std::string& s, const std::string& a, const std::string& b, int k) {
    int count = 0;
    for (int i = 0; i <= s.length() - a.length(); ++i) {
        if (isBeautiful(s, a, b, k, i)) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string s = "isawsquirrelnearmysquirrelhouseohmy";
    std::string a = "my";
    std::string b = "squirrel";
    int k = 15;

    int beautifulCount = countBeautifulIndices(s, a, b, k);
    std::cout << "Number of beautiful indices: " << beautifulCount << std::endl;

    return 0;
}

