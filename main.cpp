#include <iostream>
#include <vector>
#include <string>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    string test1 = "III";
    string test2 = "LVIII";
    string test3 = "MCMXCIV";
    string test4 = "IX";
    string single = "X";
    int result = 0;
    result = romanToInt(test1);
    std::cout << result << std::endl;
    result = romanToInt(test2);
    std::cout << result << std::endl;
    result = romanToInt(test3);
    std::cout << result << std::endl;
    result = romanToInt(test4);
    std::cout << result << std::endl;
    result = romanToInt(single);
    std::cout << result << std::endl;
    std::cout << "Program done" << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}


void vector_print(const vector<int> &v) {
    for (const auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
