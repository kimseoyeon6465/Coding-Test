#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int i=0;i<my_string.size();i++)
    {
        if(i>=(my_string.size()-n))
            answer+=my_string[i];
    }
    return answer;
}