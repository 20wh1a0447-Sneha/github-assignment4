#include<iostream>
using namespace std;
int main()
{
    int i, j, space=6;
    for(i=0; i<4; i++)
    {
        for(j=0; j<space; j++)
            cout<<" ";
        space = space-2;
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
