
#include "fractions.hpp"

/// Заголовочный файл для рациональных комплексных чисел
/// Описание типа структуры FractionComplex
/// объявления функций работы с рац.комплексными числами

struct FractionComplex
{
    Fraction re; /// действительная часть
    Fraction im; /// мнимая часть
};

FractionComplex fraction_complex_plus(FractionComplex self,
                                      FractionComplex other);

void fraction_complex_print(FractionComplex a);
