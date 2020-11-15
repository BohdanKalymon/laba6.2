#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Input(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";         cin >> a[i];
    }     cout << endl;
}


void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;     cout << endl;
}

int Sum(int* a, const int size) 
{
    int S = 0;
    for (int i=0; i < size; i++)
        if ((i % 2) == 1)
        S += a[i];   
    return S;
}


int main() {
    const int n = 6;     int a[n];
    Input(a, n);      
    cout << "S = " << Sum(a, n) / n << endl;
    return 0;
   

}


