//
// Created by Yanchen Yu on 23/7/2025.
//
#include <string>
#include <vector>
#include <__ranges/reverse_view.h>

std::string reverseWords(std::string s) {
        // std::string_view s_copy = s;
        int length = static_cast<int>(s.length());
        if (length<2) return s;
        std::vector<std::string> word_list{};
        int right = length - 1;
        for (int i = length - 2; i >= 0; i--) {
                //if (right==length-1 | (s_copy[i] == ' ')) continue;
                if (s[i] != ' ') {
                        if ( s[i+1]==' ') right=i;
                }
                else {
                        if ( s[i+1]!=' ') {
                                // printf("%s ;",s.substr(i+1, right-i).c_str());
                                word_list.push_back(s.substr(i+1, right-i));
                                right=i;
                        }
                }
        }
        word_list.push_back(s.substr(0, right+1));
        std::string result = "";
        for (auto s:word_list) {
                result.append(s);
                result.append(" ");
        }
        return result;
}
