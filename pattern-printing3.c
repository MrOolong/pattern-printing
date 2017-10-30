#include <stdio.h>

int main() {

    int noOfRows, row, col1, col2, noOfCol;
    noOfRows=5;
    noOfCol=noOfRows-1;

    for(row = 1; row <= noOfRows; row++) {

        for(col1 = 1; col1 <= noOfCol; col1++) {
            printf("-");
        }
        noOfCol--;
        for(col2 = 1; col2 <= row; col2++) {
            printf("*");
        }
        printf("\n");
    }



}