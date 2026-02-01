
#include <iostream>  
#include<cstdlib>
#include <ctime>
#include<iomanip> 
#include <vector>



using namespace std;


int ReadNumber(string Message)
{
    cout << Message;
    int N;
    cin >> N;
    return N;
}

int GenerateRandomNumber(int From, int To)
{
    return From + rand() % (To - From + 1);
}

void FillMatrix(vector<vector<int>>& vMatrix)
{

    for (vector<int>& Row : vMatrix)
    {
        for (int& Number : Row)
        {
            Number = GenerateRandomNumber(1, 100);
        }
    }
}

void PrintMatrix(const vector<vector<int>>& vMatrix)
{



    for (const vector<int>& Row : vMatrix)
    {
        for (int Number : Row)
        {
            cout << setw(5) << Number << "  ";
        }
        cout << endl;

    }

}

int main()
{
    srand((unsigned int)time(NULL));

    vector<vector<int>> vMatrix;

    int Rows = ReadNumber("\nEnter Rows\n");
    int Cols = ReadNumber("\nEnter Columns\n");

    vMatrix.resize(Rows, vector<int>(Cols));



    FillMatrix(vMatrix);

    PrintMatrix(vMatrix);

    system("pause>0");

}

