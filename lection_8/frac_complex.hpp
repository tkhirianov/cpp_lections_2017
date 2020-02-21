#ifndef FRAC_COMPLEX_HPP
#define FRAC_COMPLEX_HPP

#include "fractions.hpp"

/// ������������ ���� ��� ������������ ����������� �����
/// �������� ���� ��������� FractionComplex
/// ���������� ������� ������ � ���.������������ �������

struct FractionComplex
{
    Fraction re; /// �������������� �����
    Fraction im; /// ������ �����
};

FractionComplex fraction_complex_plus(FractionComplex self,
                                      FractionComplex other);

void fraction_complex_print(FractionComplex a);

#endif //FRAC_COMPLEX_HPP
