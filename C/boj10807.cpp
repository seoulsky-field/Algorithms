#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr_size;
    int *arr;
    int v;

    int answer = 0;

    // 수열의 크기 n을 입력 받고 해당 크기 만큼 배열에 동적 할당합니다.
    scanf("%d", &arr_size);
    arr = (int*)malloc(sizeof(int) * arr_size);

    // 배열에 값을 저장하고 값이 존재함을 표시합니다.
    for (int i=0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    // v의 값을 입력 받습니다.
    scanf("%d", &v);

    // for문 돌리고 각각의 인덱스에 접근하여 값을 확인하는 용도
    for (int i=0; i < arr_size; i++) {
        if (arr[i] == v) {
            answer++;
        }
    }

    // 정답을 출력합니다.
    printf("%d\n", answer);

    // 동적할당을 종료합니다.
    free(arr);

    return 0;
}