#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum =0;
    int multiple =1;
    if(num_list.size()>=11)
    {
        for(int i=0;i<num_list.size();i++)
    {
            sum+=num_list[i];
    }
        answer=sum;
    }
    else
    {
        for(int i=0;i<num_list.size();i++)
    {
        multiple*=num_list[i];
    }
        answer=multiple;
    }
    return answer;
}
    