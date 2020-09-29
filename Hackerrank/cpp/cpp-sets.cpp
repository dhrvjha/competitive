#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> st;
    int cho;
    int size; cin >> size;
    while (size--) {
        cin >> cho;
        int num; cin >> num;
        if (cho == 1)
            st.insert(num);
        else if (cho == 2)
            st.erase(num);
        else if (cho == 3){
            set<int>::iterator it = st.find(num);
            if (it == st.end())
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}