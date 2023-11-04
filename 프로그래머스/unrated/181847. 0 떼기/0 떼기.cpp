#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    size_t first_non_zero =n_str.find_first_not_of('0');
    if(first_non_zero != string::npos)
    {
        answer=n_str.substr(first_non_zero);
    }
    else{
        answer ="0";
    }
    return answer;
}