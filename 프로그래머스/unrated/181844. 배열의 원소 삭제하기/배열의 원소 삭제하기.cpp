#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i=0;i<delete_list.size();i++)
    {
        for(int j=0;j<arr.size();)
        {
            if(delete_list[i]==arr[j])
            {
                arr.erase(arr.begin()+j);
            }
            else
                j++;
        }
    }
    return arr;
}