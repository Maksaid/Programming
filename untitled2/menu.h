//
// Created by maksaid1972 on 12.03.2022.
//

#ifndef UNTITLED2_MENU_H
#define UNTITLED2_MENU_H


#include <string>

class menu {
private:
    std::string menu_text[4]{"1. add razdelitel \n","2. delete all razdelitel \n","3. get next substring \n","4. exit \n "};
    public:
    menu() = default;
    void print_menu();
    void working_proc();

};


#endif //UNTITLED2_MENU_H
