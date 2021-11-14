#include <stdio.h>
#include <stdbool.h>

bool IsSimple(int Num)
{
    bool Res = true;
    for (int i=2; i<Num; i++)
        if (Num % i == 0)
        {
            Res = false;
            break;
        }
    return Res;
}

int main() {
    int tarif_value;
    scanf("Tarif value: %d",&tarif_value);
    int minute_after_tarif_value;
    scanf("Minute price: %d",&minute_after_tarif_value);

    int mincount;
    scanf("Amount of mins: %d",&mincount);
    int summ = tarif_value + (mincount-499>=0 ? mincount-499 : 0)*minute_after_tarif_value;
    printf("Total value %d \n",summ);

    int Num;
    printf("Input Num: ");
    scanf("%d",&Num);
    printf( "Simple numbers: ");
    for (int i=2; i<=Num; i++)
    {
        if (IsSimple(i))
            printf("%d  ",i);
    }



    return 0;
}
