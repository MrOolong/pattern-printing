#include <stdio.h>

int main () {

    char print='*';
    int row,col;
    int noOfRows=5;

    for(row = 1; row <= noOfRows; row++) {

        for(col = 1; col <= row; col++) {

        printf("%c", print);

        }
        printf("\n");
    }

}