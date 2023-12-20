#include <stdio.h>

int main() {
    int i = 1;

    // 檢查 i 是否大於零
    if (i > 0) {
        // 取得千位數和個位數
        int thousands = (i / 1000) % 10;
        int units = i % 10;

        // 調換千位數和個位數
        i = i - thousands * 1000 + units * 1000 + thousands - units;

        // 輸出結果
        printf("調換千位數和個位數後的結果：%d\n", i);
    } else {
        printf("請輸入大於零的數字。\n");
    }

    return 0;
}

