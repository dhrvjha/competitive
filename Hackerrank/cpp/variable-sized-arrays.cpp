#include <iostream>
#include <string>

using namespace std;

void input(){
    int numberArray, numberQuery;
    cin >> numberArray >> numberQuery;
    int **arr = new int*[numberArray];
    for(int i=0;i<numberArray;i++){
        int sizeArray;
        cin >> sizeArray;
        arr[i] = new int[sizeArray];
        for (int j=0;j<sizeArray;j++){
            cin >> arr[i][j];
        }
    }
    string ans = "";
    for (int i=0;i<numberQuery;i++){
        int row, col;
        cin >> row >> col;
        cout << arr[row][col] << endl;
    }
    return;
}

int main(){
    input();
    return 0;
}
