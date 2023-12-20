#include <stdio.h>

int main() {
    for (int i = 1; i <= 81; i++) {
        int y = (i - 1) / 9 + 1;  // 計算目前的行數
        int x = (i - 1) % 9 + 1;  // 計算目前的列數
        printf("%d*%d=%d\t", y, x, y * x);

        if (i % 9 == 0) {
            // 在每行的最後換行
            printf("\n");
        }
    }

    return 0;
}

