#include <stdio.h>

int main() {

    int count[10] = {0};
    int N, answer = 0;

    // N을 입력 받습니다.
    scanf("%d", &N);

    // N을 10으로 나누어 몫은 다시 N으로 저장, 나머지에 해당하는 숫자의 count를 1 증가시킵니다.
    while (N != 0) {
        count[N % 10]++;
        N = (int)(N / 10);
    }

    // 
    count[6] = (count[6] + count[9] + 1) / 2;

    for (int i=0; i<9; i++) {
        if (count[i] > answer) {
            answer = count[i];
        }
    }

    printf("%d\n", answer);

    return 0;
}