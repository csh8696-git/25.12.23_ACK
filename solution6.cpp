#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = -1;
    if (-50000 <= num1 && num1 <= 50000 && -50000 <= num2 && num2 <= 50000) {
        answer = num1 + num2;
    }
    return answer;
}


//int Add(int x, int y) {
//    while (y != 0) {
//        unsigned carry = x & y;
//        x = x ^ y;
//        y = carry << 1;
//    }
//    return x;
//}
//
//int solution(int num1, int num2) {
//    return Add(num1, num2);
//}