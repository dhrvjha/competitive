#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void sort(int *array, int size){
    int j,key;
    for (int i=1;i<size;i++){
        key = array[i];
        j = i-1;
        while(j>=0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

int mode(int *array, int size){
    map<int,int> mp;
    int maxi,max = 0;
    for (int i=0;i<size;i++){
        int a = mp[array[i]];
        if (a!=-1){
            mp.erase(array[i]);
            mp.insert({array[i],a+1});
        } else
            mp.insert({array[i],1});
        if (max < mp[array[i]]){
            maxi = array[i];
            max = mp[array[i]];
        }
    }
    return maxi;
}

float median(int *array, int size){
    sort(array,size);
    float sum = 0;
        if (size%2)
            sum = array[size/2];
        else
            sum = (array[size/2] + array[size/2-1])/2.00;
    return sum;
}


int main() {
    int size, *array;
    float sum = 0;
    cin >> size;
    array = new int[size];
    for (int i=0;i<size;sum+=array[i],i++)
        scanf("%d",&array[i]);

    printf("%.1f\n%.1f\n",(float)sum/(float)size,median(array,size));
    printf("%d\n",mode(array,size));
    delete array;
    return 0;
}
