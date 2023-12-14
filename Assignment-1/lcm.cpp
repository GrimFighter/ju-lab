#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int findLCMArray(int arr[], int n) {
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm = findLCMArray(arr, n);
    printf("LCM of the given numbers is: %d\n", lcm);

    return 0;
}
