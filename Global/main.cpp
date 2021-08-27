#include <iostream>

using namespace std;

int global [3];
void printing(int b){
    cout<< b;
}
int main()
{
    int local [2];
    cout << "Global array " << global [0] << " " << global [1] << " " << global [2] <<endl;
    cout << "Local array " << local [0] << " " << local [1] <<endl;

    printing(5);
    return 0;
}
