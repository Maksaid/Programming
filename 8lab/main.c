#include <stdio.h>
#include <string.h>

int main() {
    char str1[1024], conc_str1[1024], conc_str2[1024], symb, *position, *position1, *position2;
    char str2[1024] = {};
    int n;
    //сложение строк
    scanf("%s", &conc_str1);
    scanf("%s", &conc_str2);
    strcat(conc_str1, conc_str2);
    printf("Concatenated: %s \n", conc_str1);
    //сложение строки и части другой строки
    scanf("%s", &str1);
    printf("Enter n: ");
    scanf("%d", &n);
    strncpy(str2, str1, n);
    printf("%s \n", str2);
    //поиск позиции символа в слове
    scanf("%s", &symb);
    position = strchr(str1, symb);
    printf("Position: %d \n", position-str1);
    //длина строки
    unsigned int length = strlen(conc_str1);
    printf("String length: %d \n",length);
    //сравненние строк
    int whichbigger = strcmp(conc_str1, conc_str2);
    if(whichbigger > 0)
        printf("1-st is bigger");
    else
        if(whichbigger == 0)
            printf("=");
        else
            printf("2-nd is bigger");
    return 0;
}
