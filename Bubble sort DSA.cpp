#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int tmp;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            if (a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                j++;
            }
        }
    }

    for (int i=0; i<n; i++)
    {
      cout<<a[i]<<" ";
    }

    return 0;
}
