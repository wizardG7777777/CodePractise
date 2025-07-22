//
// Created by Yanchen Yu on 22/7/2025.
//
#include <string>

int lengthOfLastWord(std::string s) {
    int answer = 0;
    if (s.length()==1) return 1;
    for (int i=static_cast<int>(s.size()-1);i>0;i--){
        if(s[i]!=' ') answer++;
        if (i==1 && s[i]!=' ') answer++;
        if (i>0 && (s[i]!=' ' && s[i-1]==' ')) break;
    }
    return answer;
}