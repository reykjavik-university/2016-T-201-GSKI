
#include <iostream>
using namespace std;

int sum(int arr[], int n);



int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sum(arr, 10);

    return 0;
}

int sum(int arr[], int n) {

    if (n <= 0) {   // base case
        return 0;
    }
    else {
        return (arr[n-1] + sum(arr, n-1));
    }
}
