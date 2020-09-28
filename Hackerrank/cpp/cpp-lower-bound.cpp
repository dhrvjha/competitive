#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> array;
    int size;
    cin >> size;
    for (int i=0, buf;i<size;array.push_back(buf),i++)
        cin >> buf;
    sort(array.begin(),array.end());
    cin >> size;
    for (int i=0;i<size;i++){
        int buf;
        cin >> buf;
        vector<int>::iterator low = lower_bound(array.begin(),array.end(),buf);
        if (array[low-array.begin()] == buf)
            printf("Yes ");
        else 
            printf("No ");
        cout << low-array.begin()+1 <<endl;
    }
    return 0;
}
