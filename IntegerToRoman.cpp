//
// Created by 73524 on 13/06/2025.
//
#include <string>
#include <map>
using namespace std;
string intToRoman(int num) {
    map<int, string, greater<> > Roman2Integer_map{
    {1000, "M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},
        {90,"XC"}, {50,"L"}, {40,"XL"},{10, "X"}, {9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
    };
    string answer;
    for (auto item:Roman2Integer_map) {
        const int count = num / item.first;
        for (int i = 0; i < count; i++)
            answer += item.second;
        num = num % item.first;
    }
    return answer;
}