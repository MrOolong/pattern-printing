#include <stdio.h>

int main () {

    int noOfRows;//define user input
    printf("Enter number of rows to be printed\n");
    scanf("%d", &noOfRows);//get user input
    int row, col;
    int noOfColToPrint=noOfRows;

    for(row = 1; row <= noOfRows; row++) {

        for(col = 1; col <= noOfColToPrint; col++) {
            printf("*");
        }
        printf("\n");
        noOfColToPrint--;

    }//first for loop


}//end main