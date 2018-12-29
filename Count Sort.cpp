#include <iostream>
#include <string>

using namespace std;

int main()
{
int ar[]={1,2,3,4,5,1,2,3,1,1,8};
int max=0;

for(int i=0;i<11;i++)
    if( max < ar[i] )
        max = ar[i];

int c[max+1]={0};

for(int i=0;i<11;i++)
c[ar[i]]++;

cout<<" Sorted Array : ";
for(int i=0;i<=max;i++)
    for(int j=1;j<=c[i];j++)
        cout<<i<<" ";

}
