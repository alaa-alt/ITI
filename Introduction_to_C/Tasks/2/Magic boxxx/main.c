#include <stdio.h>
#include <string.h>

int main() {
    int number = 0;
    printf("Enter the number for the magic square!\n");
    scanf("%d", &number);

    int magic_box[number][number];
    memset(magic_box, 0, sizeof(magic_box));

    int i = 0;
    int j = number / 2;

    for (int num = 1; num <= number * number; num++) {
        magic_box[i][j] = num;

        int new_i = (i - 1 + number) % number;
        int new_j = (j + 1) % number;

        if (magic_box[new_i][new_j] != 0) {
            i = (i + 1) % number;
        } else {
            i = new_i;
            j = new_j;
        }
    }
    for (i = 0; i < number; i++) {
        for (j = 0; j < number; j++) {
            printf("%3d ", magic_box[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
