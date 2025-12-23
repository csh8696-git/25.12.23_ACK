#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    double A = 0;
    double B = 0;
    if (0 < num1 && num1 <= 100 && 0 < num2 && num2 <= 100) {
        A = num1;
        B = num2;
        answer = 1000 * (A / B);
    }
    return answer;
}


//int solution(int num1, int num2) {
//    return (num1 * 1000) / num2;
//}

//int solution(int num1, int num2) {
//    int answer = ((num1 * 1.0) / num2) * 1000;
//    return answer;
//}

//int solution(int num1, int num2) {
//    num1 *= 1000u;
//    int q = 0;
//    int shift = 0;
//
//    while ((num2 << shift) <= num1 && shift < 31) ++shift;
//    if (shift) --shift;
//
//    for (; shift >= 0; --shift) {
//        int cur = num2 << shift;
//        q <<= 1;
//        if (num1 >= cur) {
//            num1 -= cur;
//            q |= 1;
//        }
//    }
//    return q;
//}