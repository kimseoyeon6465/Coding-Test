#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0;i<myString[i];i++)
    {
        answer.push_back(tolower(myString[i]));
            
    }
    return answer;
}