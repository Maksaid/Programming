#include "matrix.h"

int& matrix::operator()(int znach1, int znach2)
{
    return (digits[znach1][znach2]);
}

int matrix::row_size() {
    return rows;
}

int matrix::col_size() {
    return columns;
}

matrix matrix::operator=(matrix& a) {
    matrix help(3, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            help(i, j) = a(i, j);
        }
    }
    return help;
}

std::ostream& operator<<(std::ostream& os, matrix& value)
{
    for (int i = 0; i < value.row_size(); i++) {
        for (int j = 0; j < value.col_size(); j++) {
            os << value(i, j) << " ";
        }
        os << "\n";
    }
    return os;
}

std::istream& operator>>(std::istream& is, matrix& value)
{
    for (int i = 0; i < value.row_size(); i++) {
        for (int j = 0; j < value.col_size(); j++) {
            is >> value(i, j);
        }
    }
    return is;
}

bool operator==(matrix& a, matrix& b) {
    for (int i = 0; i < a.row_size(); i++) {
        for (int j = 0; j < a.col_size(); j++) {
            if (a(i, j) != b(i, j)) {
                return false;
            }
        }
    }
    return true;
}

bool operator!=(matrix& a, matrix& b) {
    return !(a == b);
}

bool operator>(matrix& a, matrix& b) {
    for (int i = 0; i < a.row_size(); i++) {
        for (int j = 0; j < a.col_size(); j++) {
            if (a(i, j) < b(i, j)) {
                return false;
            }
        }
    }
    return true;
}

bool operator<(matrix& a, matrix& b) {
    for (int i = 0; i < a.row_size(); i++) {
        for (int j = 0; j < a.col_size(); j++) {
            if (a(i, j) > b(i, j)) return false;
        }
    }
    return true;
}

matrix operator+(matrix& a, matrix& b) {
    matrix help(3,3);
    for (int i = 0; i < a.row_size(); i++) {
        for (int j = 0; j < a.col_size(); j++) {
            help(i, j) = a(i, j) + b(i, j);
        }
    }
    return help;
}

matrix operator-(matrix& a, matrix& b) {
    matrix help(3, 3);
    for (int i = 0; i < a.row_size(); i++) {
        for (int j = 0; j < a.col_size(); j++) {
            help(i, j) = a(i, j) - b(i, j);
        }
    }
    return help;
}

matrix operator*(matrix& a, matrix& b) {
    matrix help(3,3);
    for (int i = 0; i < a.row_size(); i++) {
        for (int j = 0; j < a.col_size(); j++) {
            help(i,j) = a(i, j) * b(i, j);
        }
    }
    return help;
}

