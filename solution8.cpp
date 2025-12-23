#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    if (0 < angle && angle < 90) {
        answer = 1;
    }
    else if (angle == 90) {
        answer = 2;
    }
    else if (angle < 180) {
        answer = 3;
    }
    else if (angle == 180) {
        answer = 4;
    }
    return answer;
} //이것 보다 단순화 가능할 것 같은데..

//int solution(int angle) {
//    return angle % 90 == 0 ? angle / 90 * 2 : (angle / 90) * 2 + 1;
//}//쉣

//int solution(int angle) {
//    return angle > 90 ? (angle == 180 ? 4 : 3) : (angle == 90 ? 2 : 1);
//}

//int solution(int angle) {
//    if (angle <= 90)
//    {
//        return angle < 90 ? 1 : 2;
//    }
//
//    else
//    {
//        return angle < 180 ? 3 : 4;
//    }
//}