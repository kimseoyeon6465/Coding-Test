#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    size_t found=my_string.rfind(is_suffix);
    if(found != string::npos &&found ==my_string.size()-is_suffix.size())
    {
        return 1;
    }
    else
        return 0;
}