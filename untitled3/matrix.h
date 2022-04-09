#pragma once
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include<queue>
struct matrix {
private:
    int rows, columns;
    std::vector<std::vector<int>> digits;
public:
    matrix(int row, int col)
    {
        rows = row, columns = col;
        digits.resize(row, std::vector<int>(col));
    }

    matrix(const matrix& matr)
            : digits(matr.rows, std::vector<int>(matr.columns))
            , rows(matr.rows)
            , columns(matr.columns)
    {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                digits[i][j] = matr(i, j);
            }
        }
    }

    int & operator()(int znach1, int znach2);
    const int& operator()(int znach1, int znach2) const
    {
        return digits[znach1][znach2];
    }

    matrix operator=(matrix& a);

    friend bool operator==(matrix& a, matrix& b);

    friend bool operator!=(matrix& a, matrix& b);

    friend bool operator<(matrix& a, matrix& b);

    friend bool operator>(matrix& a, matrix& b);

    friend matrix operator+(matrix& a, matrix& b);

    friend matrix operator-(matrix& a, matrix& b);

    friend matrix operator*(matrix& a, matrix& b);

    friend std::ostream& operator<<(std::ostream& os, matrix& value);

    friend std::istream& operator>>(std::istream& is, matrix& value);

    int row_size();

    int col_size();
};

