#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, query;
    cin >> size >> query;
    vector<long> array;
    long buf;
    for (int i=0;i<size;array.push_back(buf),i++)
        cin >> buf;
    for (int i=0;i<query;i++){
        int a,b,c;
        cin >> a >> b >> c;
        b--;
        if (a == 1){
            vector<long> arr(array.begin()+b,array.begin()+c);
            for (int i=0;i<size;i++){
                if (i >= b && i < c)
                    continue;
                arr.push_back(array[i]);
            }
            array = arr;
        }else {
            vector<long> arr(array.begin()+b,array.begin()+c);
            for (int i=size-1;i>=0;i--){
                if (i >= b && i < c)
                    continue;
                long z = array[i];
                arr.insert(arr.begin(), z);
            }
            array = arr;
        }
    }
    cout << abs(array[0]-array[size-1]) << endl;
    for (int i=0;i<size;i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}
