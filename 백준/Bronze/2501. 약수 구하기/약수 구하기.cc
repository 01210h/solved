#include<iostream>
using namespace std;

int main() {
    int n;
    int count{0};
    int key;
    cin >> n >> key;
    int *arr = new int[count];
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            *(arr + count) = i;
            count++;
        }
    }
    if (count >= key) {
        cout << *(arr + key-1);
    } else {
        cout << "0";
    }
    delete[] arr;
    return 0;
}