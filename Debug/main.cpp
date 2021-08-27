#include <iostream>

using namespace std;

int arr [2][2];
int sum = 0;
void print(){
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<< arr[i][j];
        }
    }
}
void add (int a){
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            arr[i][j] += a;
        }
    }
}
int sumMatrix (){
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
int main()
{
    print();
    add(4);
    print();
    cout<<sumMatrix();
}
