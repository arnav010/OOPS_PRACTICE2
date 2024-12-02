#include<iostream>
using namespace std;

template <class T> void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
int main(){
    int  arr[]={1,5,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort<int>(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}