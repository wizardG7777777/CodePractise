//
// Created by Yanchen Yu on 22/7/2025.
//
#include <string>
#include <vector>
std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string answer = "";
        int length = 999;
        if (strs.size()==1) return strs[0];
        for (auto s : strs) {
                if (s.length()<length)
                        length=s.length();
        }
        for (int i=0;i<length;i++){
                const char c = strs[0][i];
                for (auto s : strs) {
                    if (s[i] != c)
                            return answer;
                }
                answer += c;
        }
        return answer;
}