#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> inp={1,2,3,4,5,8,1,2,3,1,2,3,1,1};
    std::vector<int> c(*std::max_element(inp.begin(),inp.end())+1,0);
    std::vector<int> res(inp.size(),0);   
    std::vector<int>::iterator it;
    
    for(it=inp.begin();it!=inp.end();it++)
    c.at(*it)++;
     
    for(int i=1;i<c.size();i++)
    c.at(i)+=c.at(i-1);
    
    for(int i=c.size()-1;i>0;i--)
    c.at(i)=c.at(i-1);
    
    
    for(int i=0;i<inp.size();i++)
    res.at(c.at(inp.at(i))++)=inp.at(i);
    
    std::cout<<"Sorted Array : ";
    for(auto& i:res)
    std::cout<<i<<" ";
    
}
