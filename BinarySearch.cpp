#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

//int main() {
//    int arr[] = {2, 3, 4, 10, 40};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int target = 10;
//
//    int result = binarySearch(arr, size, target);
//    if (result != -1)
//        cout << "Element is present at index " << result << endl;
//    else
//        cout << "Element is not present in array" << endl;
//
//    return 0;
//}
