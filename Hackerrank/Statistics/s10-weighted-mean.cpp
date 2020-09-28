#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int *array, *freq, size;
    int sumarray = 0;
    int sumfreq = 0;
    scanf("%d",&size);
    array = new int[size];
    freq = new int[size];
    for (int i=0;i<size;i++)
        scanf("%d",&array[i]);
    for (int i=0;i<size;sumfreq+=freq[i++])
        scanf("%d",&freq[i]);
    for (int i=0;i<size;i++)
        sumarray += array[i]*freq[i];
    printf("%.1f\n",(float)sumarray/(float)sumfreq);
    delete array;
    delete freq;
    return 0;
}
