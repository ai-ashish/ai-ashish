#include <iostream>
using namespace std;


void search (int arr[], int size)
{
    int i;
    int ans = 0;
    for(int i = 0;i<size;i++)
        ans = ans^arr[i];
    cout<<"Correct ans = "<<ans<<endl;
}

int main()
{
    int arr[] = {1,2,2,3,3};
    search(arr,5);
    return 0;
}
