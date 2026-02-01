#include <iostream>  
#include<cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int GenerateRandomNumber(int From, int To)
{
    return From + rand() % (To - From + 1);
}

void FillMatrix(int Matrix[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Matrix[i][j] = GenerateRandomNumber(1, 100);
        }
    }


}

void PrintMatrix(int Matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << Matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned int)time(NULL));


    int Matrix[3][3];

    FillMatrix(Matrix);

    PrintMatrix(Matrix);

}

