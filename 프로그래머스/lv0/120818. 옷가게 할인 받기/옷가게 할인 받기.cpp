#include <string>
#include <vector>

using namespace std;


int solution(int price) {
    int answer = 0;
    if(price<100000) answer=price;
    else if(price>=100000 && price<300000) answer=(int)price*0.95;
    else if(price>=300000 && price<500000) answer=(int)price*0.9;
    else if(price>=500000) answer=(int)price*0.8;
    return answer;
}

/*
int solution(int price) {
    int answer = price;
    if (price >= 500000) {
        answer=(int)price*0.8; // 20% 할인
    } else if (price >= 300000) {
        answer=(int)price*0.9;  // 10% 할인
    } else if (price >= 100000) {
        answer=(int)price*0.95;  // 5% 할인
    }
    return answer;
}
*/
