#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num1,num2,g1,g2;
    srand (time(NULL));
    setbuf(stdout, 0);
    num1 = rand() % (9-0+1);
    num2 = rand() % (9-0+1);
    char map[10][10];
    for (int i = 0;i < 10;i++){
        for (int e = 0;e < 10;e++){
           map[i][e] = '-';
        }
    }
    int game_won = 0;

    for (int b = 9999;b > 0;b++){
      printf("   0  1  2  3  4  5  6  7  8  9   |X\n");
      for (int i = 0;i < 10;i++){
        printf("%d  %c  %c  %c  %c  %c  %c  %c  %c  %c  %c\n",i,map[i][0],map[i][1],map[i][2],map[i][3],map[i][4],map[i][5],map[i][6],map[i][7],map[i][8],map[i][9]);
      }
      printf("_\nY\n\n");
      int g1 = 0, g2 = 0;
      do {
        printf("X:");
        fflush(stdin);
        scanf("%d",&g1);
        printf("Y:");
        fflush(stdin);
        scanf("%d",&g2);
        if (g1 > 9 || g1 < 0 || g2 > 9 || g2 < 0) {
          printf("Has to be within range!\n");
        }
      } while (g1 > 9 || g1 < 0 || g2 > 9 || g2 < 0);
      if (g1 == num1 && g2 == num2){
        map[g2][g1] = 'X';
        for (int i = 0;i < 10;i++){
          printf("%c %c %c %c %c %c %c %c %c %c\n",map[i][0],map[i][1],map[i][2],map[i][3],map[i][4],map[i][5],map[i][6],map[i][7],map[i][8],map[i][9]);
        }
        printf("YOU WIN!!!");
        break;
      }
      else {
        printf("MISS!\n");
        map[g2][g1] = 'O';
      }
    }
    return 0;
}
