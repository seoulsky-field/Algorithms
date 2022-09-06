#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr_size;
    int *arr;
    int check[2000001] = {0};
    int x;

    int answer = 0;

    // 수열의 크기 n을 입력 받고 해당 크기 만큼 배열에 동적 할당합니다.
    scanf("%d", &arr_size);
    arr = (int*)malloc(sizeof(int) * arr_size);

    // 배열에 값을 저장하고 값이 존재함을 표시합니다.
    for (int i=0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
        check[arr[i]]++;
    }

    // x의 값을 입력 받습니다.
    scanf("%d", &x);

    // 탐색 알고리즘: 합이 x를 이루는 다른 숫자가 배열에 존재하는지를 확인
    for (int i=0; i < arr_size; i++) {
        if (x-arr[i] > 0 && check[x-arr[i]] == 1 && x/2 != arr[i]) {
            answer++;
            check[arr[i]] = 0;
            check[x-arr[i]] = 0;
        }
    }

    // 정답을 출력합니다.
    printf("%d\n", answer);

    // 동적할당을 종료합니다.
    free(arr);

    return 0;
}