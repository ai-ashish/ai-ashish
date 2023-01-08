#include <iostream>
using namespace std;


void swap ( int arr[], int size)
{
    //for even size
    int i;
    for (i = 0;i<size;i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

void print(int arr[], int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }

}

int main()
{
    int arr[] = {12,56,89,65,75,26};
    swap(arr, 6);
    print(arr,6);
    return 0;
}
