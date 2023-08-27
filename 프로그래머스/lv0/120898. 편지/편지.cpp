#include <string>
#include <vector>
#include <cstring>

using namespace std;

int solution(string message) {
    int answer = 0;
    int len_message= 0;
    len_message= message.size();
    answer= len_message*2;
    return answer;
}