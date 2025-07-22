#include <iostream>
#include <vector>
#include <string>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    std::vector<string> str_vec1 = {"flower","flow","flight"};
    std::vector<string> str_vec2 = {"dog","racecar","car"};
    std::vector<string> str_vec3 = {"a"};
    std::vector<string> str_vec4 = {"John", "Jonny", "JoJo"};
    std::cout << "Longest Common Prefix: " << longestCommonPrefix(str_vec1) << std::endl;
    std::cout << "Longest Common Prefix: " << longestCommonPrefix(str_vec2) << std::endl;
    std::cout << "Longest Common Prefix: " << longestCommonPrefix(str_vec3) << std::endl;
    std::cout << "Longest Common Prefix: " << longestCommonPrefix(str_vec4) << std::endl;
    std::cout << "Program ends" << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}


void vector_print(const vector<int> &v) {
    for (const auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
