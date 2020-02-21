#include <iostream>

void printer(double A[][4])
{
    for(int k = 0; k < 3; k++)
    {
        for(int j = 0; j < 4; j++)
            std::cout << A[k][j] << '\t';
        std::cout << std::endl;
    }
}

int main()
{
    double A[3][4];

    for(int k = 0; k < 3; k++)
        for(int j = 0; j < 4; j++)
            A[k][j] = 1 + k*4 + j;

    printer(A);

    return 0;
}
