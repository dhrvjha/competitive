#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool myfunc(int i, int j){
    return i<j;
}

int main() {
    vector<int> array;
    int size;
    cin >> size;
    int buffer;
    for (int i=0;i<size;array.push_back(buffer),i++)
        cin >> buffer;
    sort(array.begin(),array.end(),myfunc);
    for (int i=0;i<size;i++)
        cout << array[i] << " " ;
    cout << endl;
    return 0;
}
