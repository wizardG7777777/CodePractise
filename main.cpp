#include <iostream>
#include <vector>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    vector<int> rating1 = {1,0,2};
    vector<int> rating2 = {1,2,2};
    vector<int> rating3 = {0,1};
    vector<int> rating4 = {1,1,0,1};
    vector<int> rating5 = {1,0};
    vector<int> single = {0};
    int answer = 0;
    answer = candy(rating1);
    std::cout << answer << std::endl;
    answer = candy(rating2);
    std::cout << answer << std::endl;
    answer = candy(rating3);
    std::cout << answer << std::endl;
    answer = candy(rating4);
    std::cout << answer << std::endl;
    answer = candy(rating5);
    std::cout << answer << std::endl;
    answer = candy(single);
    std::cout << answer << std::endl;
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
