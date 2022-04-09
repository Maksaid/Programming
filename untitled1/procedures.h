//
// Created by maksaid1972 on 22.02.2022.
//

#ifndef UNTITLED1_PROCEDURES_H
#define UNTITLED1_PROCEDURES_H



    void increment(double *first, double second);
    void increment(double &first, double second);
    void fractionalize(double *first);
    void fractionalize_link(double &first);
    void complex_link(std::complex<double> &complex);
    void complex_link(std::complex<double>* complex1);
    void move_rectangle( double ( *square )[2], size_t n,double vector[]);
    void move_rectangle_link(  double  (&square)[4][2],double  vector[]);


#endif //UNTITLED1_PROCEDURES_H
