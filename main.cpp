#include <iostream>
#include <vector>
#include <string>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    string s01 = "the sky is blue";
    string s02 = "  hello world  ";
    string s03 = "a good   example";
    string single01 = "a ";
    string single02 = "a";
    std::cout << reverseWords(s01) << std::endl;
    std::cout << reverseWords(s02) << std::endl;
    std::cout << reverseWords(s03) << std::endl;
    std::cout << reverseWords(single01) << std::endl;
    std::cout << reverseWords(single02) << std::endl;
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
