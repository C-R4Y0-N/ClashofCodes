#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2)
    {
        for(int i=1; i<=n; i+=2)
        {
            cout<<i<<endl;
        }
    }
    else
    {
        for(int i=1; i<n; i+=2)
        {
            cout<<i<<endl;
        }
    }
}