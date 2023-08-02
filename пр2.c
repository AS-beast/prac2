#include <stdio.h>

int gcd(int a, int b) { /* Функція для знаходження НСД двох чисел  */
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {    /* Функція для знаходження НСК двох чисел */
    return (a * b) / gcd(a, b);
}

int findLCM(int arr[], int n) { /* Функція для знаходження НСК масиву */
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;
    
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int leastCommonMultiple = findLCM(numbers, n);
    printf("%d\n", leastCommonMultiple);

    return 0;
}