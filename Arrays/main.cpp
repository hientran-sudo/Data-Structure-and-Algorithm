#include <iostream>
using namespace std;
int arr[3]={1,2,3};
int arr2[2][2]={{1,2},{3,4}};
int arr3[2][2];
int main()
{
    //fixed array
    for (int i=0;i<3;i++){
        cout<< arr[i]<<endl;
    }
    //multi dimension array
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<arr2[i][j]<<endl;
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cin>>arr3[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<arr3[i][j]<<endl;
        }
    }

    return 0;
}
