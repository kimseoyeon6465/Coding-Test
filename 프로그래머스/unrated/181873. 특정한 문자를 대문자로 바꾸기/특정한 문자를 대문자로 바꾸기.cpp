#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for(int i=0;i<my_string.size();i++)
    {
        if(my_string[i]==alp[0])
            answer.push_back(toupper(my_string[i]));
        else
            answer.push_back(my_string[i]);
    }
    return answer;
}