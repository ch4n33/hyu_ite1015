#include <iostream>
using namespace std;

int whatsMax(int *arr1, int size1);
int whatsMin(int *arr2, int size2);
float whatsAvg(int *arr3, int size3);
int main() {
    int arr[100];
    int input=0, i=0;
    while (input != -1){
        cin >> input;
        if(input > -1 && input < 101){
            arr[i] = input;
            i++;
        }
    }
    int size = i;
    cout << "Max : " << whatsMax(arr, size) << endl;
    cout << "Min : " << whatsMin(arr, size) << endl;
    cout << "Avg : " << whatsAvg(arr, size) << endl;
    return 0;
}

int whatsMax(int *arr1, int size1){
    int max = 0;
    for (int i = 0; i < size1; ++i) {
        if(arr1[i] > max) max = arr1[i];
    }
    return max;
}
int whatsMin(int *arr2, int size2){
    int min = 100;
    for (int i = 0; i < size2; ++i) {
        if(arr2[i] < min) min = arr2[i];
    }
    return min;
}
float whatsAvg(int *arr3, int size3){
    int sum = 0;
    for (int i = 0; i < size3; ++i) {
        sum += arr3[i];
    }
    float avg = (sum + 0.0)/size3;
    return avg;
}