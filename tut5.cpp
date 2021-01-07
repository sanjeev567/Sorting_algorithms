//<-----------------Insertion sort ------------------->

#include <iostream>
using namespace std;

void Insertionsort(int A[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        int value = A[i];
        int hole = i;
        while (hole > 0 && A[hole - 1] > value)
        {
            A[hole] = A[hole - 1];
            hole = hole - 1;
        }
        A[hole] = value;
    }
}

int main()
{
    int A[] = {3, 2, 4, 7, 6, 9};
    Insertionsort(A, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i];
    }

    return 0;
}