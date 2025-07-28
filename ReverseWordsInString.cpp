//
// Created by Yanchen Yu on 23/7/2025.
//
#include <string>
#include <vector>
#include <__ranges/reverse_view.h>

std::string reverseWords(std::string s) {
        // std::string_view s_copy = s;
        std::string result = "";
        int length = static_cast<int>(s.length());
        if (length<2) return s;
        int right = length - 1;
        for (int i = length - 2; i >= 0; i--) {
                //if (right==length-1 | (s_copy[i] == ' ')) continue;
                if (s[i] != ' ') {
                        if ( s[i+1]==' ') right=i;
                }
                else {
                        if ( s[i+1]!=' ') {
                                // printf("%s ;",s.substr(i+1, right-i).c_str());
                                result.append(s.substr(i+1, right-i));
                                result.append(" ");
                                right=i;
                        }
                }
        }
        if (s[0]!=' ') result.append(s.substr(0, right+1));
        for (int i = s.length()-1;i>=0 && result[i]==' ';i--) result.pop_back();
        return result;
}
