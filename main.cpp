#include <iostream>
#include <vector>
#include "util.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void vector_print(const vector<int> &v);

int main() {
    std::cout << "Program begins" << std::endl;
    vector<int> gas1 = {1,2,3,4,5};
    vector<int> cost1 = {3,4,5,1,2};
    vector<int> gas2 = {2,3,4};
    vector<int> cost2 = {3,4,3};
    int output = -1;
    output = canCompleteCircuit(gas1,cost1);
    std::cout << "Answer for question1: " << output << std::endl;
    output = canCompleteCircuit(gas2,cost2);
    std::cout << "Answer for question2: " << output << std::endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}


void vector_print(const vector<int> &v) {
    for (const auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
