#include <stdio.h>
#include <math.h>

struct Line {
    int x1;
    int y1;
    int x2;
    int y2;
};

int linelength(struct Line line) {
    return sqrtf((line.x2-line.x1)*(line.x2-line.x1) + (line.y2-line.y1)*(line.y2-line.y1));
}

struct ADSL {
    unsigned int DSL: 1;
    unsigned int PPP: 1;
    unsigned int Link: 1;
};

union ADSLU {
    unsigned u;
    struct ADSL adsl;
};

int main()
{
    enum Prints {
        pancake,
        icecream,
        candy
    };

    printf("Sweets: %d \n", candy);

    struct Line line = {1, 1,5,9};
    printf("Length: %d \n", linelength(line));

    union ADSLU ADSL;
    printf("Insert: ");
    scanf("%x", &ADSL.u);
    printf("Elements_DSL: %d\n", ADSL.adsl.DSL);
    printf("Elements_PPP: %d\n", ADSL.adsl.PPP);
    printf("Elements_Link: %d\n", ADSL.adsl.Link);
}