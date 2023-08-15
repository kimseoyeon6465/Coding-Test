#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2);
    int odd = 0;
    int even = 0;
    vector<int> ::iterator it = answer.begin();
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even++;

        }
        else
        {
            odd++;

        }

    }
    answer[0] = even;
    answer[1] = odd;

    return answer;
}

int main()
{
    solution({ 1,2,3,4,5 });
    solution({ 1,3,5,7 });
}