#include <iostream>
#include <vector>
#include <string>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    int test1 = 3749;
    int test2 = 58;
    int test3 = 1994;
    int test4 = 4;
    int single = 1;
    string result = intToRoman(test1);
    std::cout << result << std::endl;
    result = intToRoman(test2);
    std::cout << result << std::endl;
    result = intToRoman(test3);
    std::cout << result << std::endl;
    result = intToRoman(test4);
    std::cout << result << std::endl;
    result = intToRoman(single);
    std::cout << result << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}


void vector_print(const vector<int> &v) {
    for (const auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
