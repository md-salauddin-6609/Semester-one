#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // tree height
    int top_height = 7 + (n - 1) / 2;
    int max_width = 2 * top_height - 1;

    // tree top
    for (int i = 0; i < top_height; i++) {
        int stars = 2 * i + 1;
        int spaces = (max_width - stars) / 2;

        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    // tree stand
    for (int i = 0; i < 5; i++) {
        int spaces = (max_width - n) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < n; j++) printf("*");
        printf("\n");
    }

    return 0;
}
