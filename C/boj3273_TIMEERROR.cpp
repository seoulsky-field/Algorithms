#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr_size;
    int *arr;
    int x;

    int start_idx = 0, end_idx = arr_size-1;
    int answer = 0;

    // 수열의 크기 n을 입력 받고 해당 크기 만큼 배열에 동적 할당합니다.
    scanf("%d", &arr_size);
    arr = (int*)malloc(sizeof(int) * arr_size);

    // 배열에 값을 저장합니다.
    for (int i=0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    // x의 값을 입력 받습니다.
    scanf("%d", &x);

    // 배열을 오름차순으로 정렬합니다.
    for (int i=0; i < arr_size; i++) {
        for (int j=i+1; j < arr_size; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 정렬 결과 Debugging
    // for (int i=0; i < arr_size; i++) {
    //     printf("%d", arr[i]);
    // }
    // printf("\n");

    // 탐색 알고리즘: 양 끝을 시작으로 점점 배열의 중간으로 좁혀오는 알고리즘입니다.
    // 단, 2로 나눠서 하지 않은 이유는 배열의 값이 1 2 3 11 12인데 x가 23인 경우와 같이 중앙을 기준으로만 할 경우 오류가 발생할 수 있기 때문입니다.
    for (int i=0; i < end_idx; i++) {
        for (int j=end_idx; j > i; j--) {
            if (arr[i] + arr[j] == x) {
                answer += 1;
                end_idx = j-1;
                break;
            }
        }
    }

    // 정답을 출력합니다.
    printf("%d\n", answer);

    // 동적할당을 종료합니다.
    free(arr);

    return 0;
}