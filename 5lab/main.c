#include <stdio.h>

int main() {
    int a[9] = {12,13,14,15,16,17,18,19,20};
    for (int i=0; i<9; i++) {
        if(i<8)
        printf("%d, ", a[i]);
        else
            printf("%d",a[i]);
         }
    int b[2][2];
    for (int i=0; i<2; i++){
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    int c[2][2];
    for (int i=0; i<2; i++){
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &c[i][j]);
        }
    }
    int res[2][2];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            res[i][j] = 0;
            for(int k=0; k<2; k++) {
                res[i][j] += b[i][k] * c[k][j];
            }
        }
    }
    for(int i=0; i<2; i++) {
        printf("%d %d \n", res[i][0], res[i][1]);

    }

    return 0;
}
