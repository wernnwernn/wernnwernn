#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n=0,s=0,e=0,w=0;
    char arr[110] ;
    cin.getline (arr,110);
    for (int i = 0; i < 110; i++)
    {
        if (arr[i]=='N')
        {
            n+=1;
        }
        else if (arr[i]=='S')
        {
            s+=1;
        }
        else if (arr[i]=='E')
        {
            e+=1;
        }
        else if (arr[i]=='W')
        {
            w+=1;
        }
    }
    int nn;
    cin>>nn;
    cout <<n<<","<<s<<","<<e<<","<<w<<'\n';
    for (int i = 0; i < nn; i++)
    {
    if (n>s)
    {
        if (s!=0)
        {
            s--;
        }
        else
        {
            if (e>w)
            {
                if (w!=0)
                {
                    w--;
                }
                else
                {
                    if (n==0)
                    {
                        e--;
                    }
                    else
                    {
                        n--;
                    }
                    
                }
            }
            else //w>e
            {
                if (e!=0)
                {
                    e--;
                }
                else
                {
                    if (n==0)
                    {
                        w--;
                    }
                    else
                    {
                        n--;
                    }
                }
                
                
            }
            
        }
    }
    else{
        if (n!=0)
        {
            n--;
        }
        else
        {
            if (e>w)
            {
                if (w!=0)
                {
                    w--;
                }
                else
                {
                    if (s==0)
                    {
                        e--;
                    }
                    else
                    {
                        s--;
                    }
                    
                }
                
            }
            else
            {
                if (e!=0)
                {
                    e--;
                }
                else
                {
                    if (s==0)
                    {
                        w--;
                    }
                    else
                    {
                        s--;
                    }
                    
                }
                
            }
            
            
        }
        
        
    }
    cout <<n<<","<<s<<","<<e<<","<<w<<'\n';
    }
    int x = n-s;
    int y=e-w;
    // cout <<n<<","<<s<<","<<e<<","<<w<<'\n';
    // cout <<x<<","<<y<<'\n';
    cout << (abs(x)+abs(y))*2;
    

    return 0;
}