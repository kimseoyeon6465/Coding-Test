#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<my_string.size();i++)
    {
        answer.push_back(my_string[i]);
    }
    }
    return answer;
}