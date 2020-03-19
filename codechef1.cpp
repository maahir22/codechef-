#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int max_element = -1e8;
        for(int j=0;j<n;j++)
        {
            int apples;
            cin>>apples;
            max_element = max(max_element,apples);
        }
        cout <<max_element << endl;

    }
}
