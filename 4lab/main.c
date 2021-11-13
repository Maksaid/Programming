#include <stdio.h>
//четвертая лаба
int main() {
    int z1,z2;
    int a=20,b=30;
    int c,m;
    scanf("%d %d", &c, &m);
    z1 = (c>=a && c<=b ? 1 : 0);
    printf("%c %d", z1 ? 'Y':'N',(m>>17) %2 );

    return 0;
}