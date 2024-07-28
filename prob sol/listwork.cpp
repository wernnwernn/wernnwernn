#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i,n,b,j;
    char a;
    vector<int> vi;
    vector<int>::iterator it;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a>>b;
        if (a=='I')
        {
             vi.insert(vi.begin(), b);
        }
        else if (a=='A')
        {
             vi.insert(vi.end(), b);
        }
        else if (a=='D')
        {
            if (vi.size()>=b)
            {
                it = vi.begin()+b-1;
                vi.erase(it);
            }
        }
    }
    for(j = 0; j < vi.size(); j++){
        cout<<vi[j]<<"\n";
    }
    return 0;
}