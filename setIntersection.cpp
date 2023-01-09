#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
void fun(int a[], int b[], int a1, int b1)
{
    for(int i= 0;i<a1;i++)
    {
        int temp = a[i];
        for (int j =0;j<b1;j++)
        {
                if(temp == b[j])
                {
                    cout<<temp<<" ";
                    b[j] = INT_MIN;
                }
        }
    }
}

int main()
{
    int temp[] = {1,2,3,4,5};
    int temp1[] = {1,2,3,8,9,6};
    fun(temp,temp1,5,6);
    return 0;
}
