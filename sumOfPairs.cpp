#include <iostream>
using namespace std;

void func(int arr[], int size,int num)
{
    int i;
    for(i=0;i<size;i++)
    {
        for(int j = i;j<size;j++)
        {
            if((arr[i] + arr[j]) == num)
            cout<<arr[i]<<" "<<arr[j]<<endl;

        }
    }
}

int main()
{
    int array[] = {1,2,3,4,5};
    int num = 6;
    func(array,5 , num);
    return 0;
}
