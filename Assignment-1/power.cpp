#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;
    
    if (exponent >= 0) {
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
    } else {
        // Handling negative exponent
        for (int i = 0; i > exponent; --i) {
            result /= base;
        }
    }
    
    return result;
}

int main() {
    double base_number;
    int exponent_number;
    
    printf("Enter the base number: ");
    scanf("%lf", &base_number);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent_number);
    
    double result = power(base_number, exponent_number);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base_number, exponent_number, result);
    
    return 0;
}
