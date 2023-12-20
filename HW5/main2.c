#include <stdio.h>

int main() {
    double PI = 4.0;
    double targetPI = 3.14159;
    double epsilon = 1.0e-5;  // 精確度設定為1e-5
    int termCount = 0;

    for (int i = 1; ; i += 2) {
        double term = 4.0 / i;
        if (termCount % 2 == 0) {
            PI += term;
        } else {
            PI -= term;
        }

        termCount++;

        if (term < epsilon && termCount > 1) {
            break;  // 當term小於精確度時，並且至少計算了一項時，結束迴圈
        }
    }

    printf("PI = %.5f\n", PI);
    printf("Number of terms: %d\n", termCount);

    return 0;
}
