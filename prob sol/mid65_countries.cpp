#include<iostream>
using namespace std;
int main(){
    int ans =0;
    int r,c,a,b,x,y;
    cin>>r>>c>>a>>b>>x>>y;
    a--;
    b--;
    x--;
    y--;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j] ;
        }
    }
    int n = arr[a][b];
    int xx=-1,yy=-1;
    if (y>b)
    {
        yy=1;
    }
    if (x>a)
    {
        xx=1;
    }
while (arr[a][b] != arr[x][y])
{
    int n = arr[a][b];
    int m,o;
    if (yy>0)
    {
        m = arr[a][b+1];
    }
    else if (yy<0)
    {
        m = arr[a][b-1];
    }
    // int m = arr[a][b+1];
    if (xx>0)
    {
        o = arr[a+1][b];
    }
    else if(xx<0)
    {
        o = arr[a-1][b];
    }
    // int o = arr[a+1][b];
    
    if (n==m)
    {
        if (y>b)
        {
            b+=1;
        }
        else if (b>y)
        {
            b-=1;
        }
        
    }
    else
    {
        if (n==o)
        {
            if (x>a)
            {
                a+=1;
            }
            else if (a>x)
            {
                a-=1;
            }
        }
        else
        {
            if (b!=y)
            {
                if (y>b)
                {
                    b+=1;
                }
                else if (b>y)
                {
                    b-=1;
                }
                ans+=1;
            }
            else
            {
                if (x>a)
                {
                    a+=1;
                }
                else if (a>x)
                {
                    a-=1;
                }
                ans+=1;
            }
            
        }
    }
    // cout<<n<<' '<<m<<' '<<o<<' '<<arr[a][b]<<' '<<a<<' '<<b<<' '<<ans<<'\n';
}
cout<<ans;
    return 0;
}