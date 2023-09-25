#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int multiple =1;
    int square=0;
    for(int i=0;i<num_list.size();i++)
    {
        multiple*=num_list[i];
        square+=num_list[i];
    }
    if(multiple<(square*square))
        answer=1;
    return answer;
}