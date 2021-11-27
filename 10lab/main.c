#include <stdio.h>
#include <math.h>
float fillarray(float *pointcoords,int n){
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            pointdistance[i][j] = count_distances(pointcoords[i][0],pointcoords[i][1],pointcoords[j][0],pointcoords[j][1]);
        }
    }
}
float count_distances(float x1,float y1,float x2,float y2){
    return sqrtf((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}
int summ(int currentsumm,int number){
    currentsumm+=number%10;
    number/=10;
    if(number!=0)
    summ(currentsumm,number);
    else
        return currentsumm;
}
int main() {
  //  int number;
    //scanf("%d", &number);
    //printf("summ: %d\n", summ(0, number));
    //printf("amount of points: \n");
    int n;
    scanf("%d", &n);
    float pointcoords[n][2];
    for (int i = 0; i < n; ++i) {
        printf("input %d point coords :\n", i);
        scanf("%f %f", &pointcoords[i][0], &pointcoords[i][1]);
    }
    float pointdistance[n][n];
    fillarray(&pointcoords,n);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j) {
            pointdistance[i][j] = count_distances(pointcoords[i][0],pointcoords[i][1],pointcoords[j][0],pointcoords[j][1]);
        }
}
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
          //  printf("between %d and %d ",i,j);
            printf("%f ",pointdistance[i][j]);
            if(j + 1 == n )
                printf("\n");

        }
    }
    return 0;
}
