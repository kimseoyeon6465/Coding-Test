#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] != letter[0])
        {
            answer+=my_string[i];
        }
    }
    return answer;
}

int main()
{
    solution("abcdef", "f");
}