#include<stdio.h>

void solve(int n, int a, int b, int c) {
    if (n >= 3) {
        solve(n - 3, a, b, c + 1);
    } else if (n == 2) {
        solve(n - 2, a, b + 1, c);
    } else if (n == 1) {
        solve(n - 1, a + 1, b, c);
    } else if (n == 0) {
        printf("a=%d\nb=%d\nc=%d", a, b, c);
    }
}

int main() {
    int length;
    printf("Enter the length of the rope: ");
    scanf("%d", &length);
    int a = 0, b = 0, c = 0;
    solve(length, a, b, c);
    return 0;
}

