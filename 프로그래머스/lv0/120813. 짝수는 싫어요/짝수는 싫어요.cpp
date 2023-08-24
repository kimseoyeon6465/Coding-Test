#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    if (n%2==0)
    {
        for (int i=0; 2*i+1<n; i++)
    {
        answer.push_back(2*i+1);
    }
    
    }
    else
    {
            for (int i=0; 2*i<n;i++)
            {
                      answer.push_back(2*i+1);
            }
    }

    return answer;
}