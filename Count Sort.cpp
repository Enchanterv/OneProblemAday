#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
std::vector<int> vec={1,2,3,4,5,1,2,3,1,1,8};
std::vector<int>::iterator it;
int max = *std::max_element(vec.begin(),vec.end());

std::vector<int> c(max+1,0);

std::cout<<std::endl;

for(it=vec.begin();it!=vec.end();it++)
c.at(*it)++;

std::cout<<" Sorted Array : ";

for(int i=0;i<=max;i++)
    for(int j=1;j<=c.at(i);j++)
        std::cout<<i<<" ";

}
