#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = { 8, 10, 6, 9, 7 };
    int brr[] = {1,2,3,4,5};

    sort(arr, arr+5, greater<int>());

    // pass the template argument <int> to `std::greater` before C++14;
    // otherwise, the code won't compile

    for (int i=0; i<5;i++) {
        cout << arr[i] << ' ';
    }
    swap(arr[0],brr[0]);
    cout<<arr[0]<<endl;
    cout<<brr[0];

    return 0;
}
