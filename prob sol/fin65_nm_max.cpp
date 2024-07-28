#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        a[i] = b;
    }
    sort(a, a + n);
    for (int i = 0; i < q; i++)
    {
        int x,y;
        int num = 0;
        cin>>x>>y;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (a[mid] < x)
            {
                left = mid + 1;
            }
            else
            {
                if (a[mid] >= y)
                {
                    break;
                }
                num += 1;
                x = x - a[mid];
                if (x == 0)
                {
                    break;
                }
                left = mid + 1;
            }
        }
        cout<<num<<" ";
    }
    return 0;
}
