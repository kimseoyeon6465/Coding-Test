#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    if(my_string.rfind(is_prefix,0)==0)
    {
        answer=1;
    }
    else
        answer=0;
    return answer;
}