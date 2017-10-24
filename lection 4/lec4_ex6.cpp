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
    A[0] = new double[width*height];
    for(int k = 0; k < height; k++)
        A[k] = A[0] + k*width;

    for(int k = 0; k < height; k++)
        for(int j = 0; j < width; j++)
            A[k][j] = 1 + k*width + j;


    printer(A, height, width);

    delete[] A[0];
    delete[] A;

    return 0;
}
