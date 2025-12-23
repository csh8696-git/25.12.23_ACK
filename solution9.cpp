#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            answer += i;
        }
    }
    return answer;
}
//이하 괴상한 풀이법들

//int solution(int n) {
//    int answer = n / 2;
//    answer *= answer + 1;
//    return answer;
//}

//int solution(int n) { return (n >> 1) * ((n >> 1) + 1); }