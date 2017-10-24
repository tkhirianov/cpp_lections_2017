#include <iostream>

void printer(double **A, int height, int width)
{
    for(int k = 0; k < height; k++)
    {
        for(int j = 0; j < width; j++)
            std::cout << A[k][j] << '\t';
        std::cout << std::endl;
    }
}

int main()
{
    int width = 4, height = 3;
    double **A = nullptr;
    A = new double*[height];
    for(int k = 0; k < height; k++)
        A[k] = new double[width];

    for(int k = 0; k < height; k++)
        for(int j = 0; j < width; j++)
            A[k][j] = 1 + k*width + j;


    printer(A, height, width);

    for(int k = 0; k < height; k++)
        delete[] A[k];
    delete[] A;

    return 0;
}
