#include <stdio.h>

int main(void) {
    // Sets the arrays and variables as an integer
    int students[2][5], iD= 0, score = 0, avg,highest,lowest;
    // Table visualisation
    // [0,0] [1,0]
    // [0,1] [1,1]
    // [0,2] [1,2]
    // [0,3] [1,3]
    // [0,4] [1,4]
    // [0,5] [1,5]
    // starts the for loop to fill up the list x value
    for(iD = 0; iD<2; iD++){
        // says to enter their student number into the arrat
        printf("Enter student number: ");
        // ensures space for input
        fflush(stdin);
        // input
        scanf("%d",&students[iD][0]);
        // used to fill up list y value.
        for(score = 1; score < 5; score++){
            //tells someone to enter their score
            printf("Enter score %d: ",score);
            fflush(stdin);
            // inputs into the
            scanf("%d",&students[iD][score]);
        }
    }
    // x bit of the array
    for(int i = 0; i < 2; i++){
        highest = 0;
        lowest = 99;
        avg = 0;
        // y bit of the array
        for(int j = 1; j<5; j++){
            // works out average
            avg+=students[i][j];
            if (students[i][j] > highest) {
                highest = students[i][j];
            }
            if (students[i][j] < lowest) {
                lowest = students[i][j];
            }
        }
        // says the students averages.
    printf("Student %d avg is: %d Highest is: %d Lowest is: %d \n",students[i][0],avg/5,highest,lowest);
    }
    return 0;
}
