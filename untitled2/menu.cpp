//
// Created by maksaid1972 on 12.03.2022.
//

#include "menu.h"
#include "iostream"
#include "Numbers.h"
using namespace std;
void menu::print_menu() {
    for (int i = 0; i < 4; ++i) {
        std::cout << menu_text[i];
    }
}
void menu::working_proc(){
    int k = 0;
    string str;
    getline(cin,str);
    Numbers obj(str);
    print_menu();
    std::string chr;
    int number;
    scanf("%d", &number);
    while(number != 4){
        switch (number) {
            case 1:
                printf("input razdelitel: \n");
                getline(cin,chr);
                getline(cin,chr);
                obj.addRazdel(chr);
                break;
            case 2:
                obj.deleteAllRazdel();
                break;
            case 3:
                cout << obj.doProcess() << endl;
                break;
            case 4:
                exit(0);

        }
        print_menu();
        scanf("%d", &number);
}}