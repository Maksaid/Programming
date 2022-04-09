//
// Created by maksaid1972 on 22.02.2022.
//
#include <iostream>
#include <complex>
#include "procedures.h"

void increment(double* first, double second) {
    *first += second;
    std::cout << *first << std::endl;
}
void fractionalize(double *first){
    *first = *first  - (int)*first;
    std::cout << *first << std::endl;
}
void fractionalize_link(double &first){
    first = first  - (int)first;
    std::cout << first << std::endl;
}
void complex_link(std::complex<double> &complex){
    std::cout << conj(complex) << std::endl;
}
void complex_link(std::complex <double>* complex1){

    std::cout << conj(*complex1) << std::endl;
}
void increment(double &first, double second){
    first+=second;
    std::cout << first  << std::endl;
}
void move_rectangle( double ( *square )[2], size_t n,double vector[]){
    for (int i = 0; i < 4; ++i) {
        square[i][0] += vector[0];
        square[i][1] += vector[1];
    }
    for (int i = 0; i < 4; ++i) {
        std::cout << "(" << square[i][0]<<", " << square[i][1] << ")"<< std::endl;
    }
}
void move_rectangle_link( double  (&square)[4][2],double  vector[]){
    for (int i = 0; i < 4; ++i) {
        square[i][0] += vector[0];
        square[i][1] += vector[1];
    }
    for (int i = 0; i < 4; ++i) {
        std::cout << "(" << square[i][0]<<", " << square[i][1] << ")"<< std::endl;
    }
}


