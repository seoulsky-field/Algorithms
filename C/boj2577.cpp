#include <stdio.h>

int main() {

    int count[10] = {0};
    int A, B, C, mul_result;

    // A, B, C 숫자를 입력 받습니다.
    scanf("%d\n%d\n%d", &A, &B, &C);

    // A * B * C 결과를 구하고 10으로 나눈 나머지를 카운트, 결과는 10으로 나눈 몫으로 교체하며 몫이 0이 아닐 때까지 반복합니다.
    mul_result = A * B * C;
    while (mul_result != 0) {
        count[mul_result % 10]++;
        mul_result = (int)(mul_result / 10);
    }

    // 출력 형식에 맞게 결과를 출력합니다.
    for (int i=0; i<10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}