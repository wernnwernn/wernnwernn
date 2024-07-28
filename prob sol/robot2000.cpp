#include<iostream>
#include<vector>
#include<string>
#include <cstdlib>
using namespace std;
int main(){
    char arr[110] ;
    int a=0 ,num[110];
    // string ab[] ="we";
    vector<string> v;
    for (int i = 0; i < 110; i++)
    {
        num[i] = 10;
    }
    
    cin.getline (arr,110);
    for (int i = 0; i < 110; i++)
    {
        if (arr[i]=='N')
        {
            num[i] =0;
        }
        else if (arr[i]=='E')
        {
            num[i] =1;
        }
        else if (arr[i]=='S')
        {
            num[i] =2;
        }
        else if (arr[i]=='W')
        {
            num[i] =3;
        }
        else if (arr[i] =='Z')
        {
            num[i] = 15;
        }
        
    }
    int e=0;
    // cout<<"กำลังจะเข้าloop";
    while (1)
    {
        if (num[e]==10)
        {
            break;
        }
        else if (num[e] == 15)
        {
            a = 0;
            // v.push_back("Z");
            cout<<'Z';
            
        }
        else if ((num[e]-a)!=0)
        {
            while (num[e]!=a)
            {
                // v.push_back("R");
                cout<<"R";
                a++;
                a = a%4;
            }
            
        }
        if (num[e] !=15)
        {
        // v.push_back("F");
        cout<<"F";
        // cout<<"a="<<a<<"\n";
        }
        
        e++;
    }
    
    // for (int i = 0; i < 110; i++)
    // {
    //     cout<<v[i];
    // }
    
}




//RRFRRRFRFRRRFRRFRRRFRRFRRFRFRRRFRFRRFFRRRFRRRFRRRFRRFRRRFRRRFFRRFRRFRFRRFRFFFRRRFRRFFRRRFFRRFRFRRRFRRFRRFFRRRFFRRFRFRRFFRRRFFRRFRRRFRRRFRRF

//RRFRRRFRFRRRFRRFRRRFRRFRRFRFRRRFRFRRFFRRRFRRRFRRRFRRFRRRFRRRFFRRFRRFRFRRFRFFFRRRFRRFFRRRFFRRFRFRRRFRRFRRFFRRRF