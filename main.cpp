#include <iostream>
#include <vector>
#include <string>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    std::string s01 = "Hello World";
    std::string s02 = "   fly me   to   the moon  ";
    std::string s03 = "luffy is still joyboy";
    std::string single = "a";
    std::string isolate = "    space    ";
    std::cout << lengthOfLastWord(s01) << std::endl;
    std::cout << lengthOfLastWord(s02) << std::endl;
    std::cout << lengthOfLastWord(s03) << std::endl;
    std::cout << lengthOfLastWord(single) << std::endl;
    std::cout << lengthOfLastWord(isolate) << std::endl;
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
