#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
int now(int maxSum,int *nowSum,int n,int num) {
    if (*nowSum > maxSum)
        maxSum = *nowSum;
    if (*nowSum < 0)
        *nowSum = 0;
    return maxSum;
}
int main() {
    int n;
    int maxSum = 0;
    int nowSum = 0;
    scanf("%d", &n);
    int num;
    for (int i = 0;i < n;i++) {
        scanf("%d", &num);
        nowSum += num;
        maxSum = now(maxSum,&nowSum,n, num);
    }
    /*for (int i = 1;i <= n;i++) {
        int num;
        scanf("%d", &num);
        nowSum += num;
        if (nowSum > maxSum)
            maxSum = nowSum;
        if (nowSum < 0)
            nowSum = 0;
    }*/
    printf("%d", now(maxSum, &nowSum, n, num));
    return 0;
}