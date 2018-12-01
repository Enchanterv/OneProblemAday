#include <iostream>
#include <algorithm> 
#include <vector>
#include <cstring>

int knapSack(int W,std::vector<int>wt,std::vector<int>val,int n )
{   
    int KS[W+1][n+1];
    memset(KS,-1,sizeof(KS));
    
    if( W==0 || n==0 )
    return 0;
    
    if(KS[W][n] < 0)
    {  
        if(wt[n-1]>W)
        KS[W][n]=knapSack(W,wt,val,n-1);
        
        else
        KS[W][n]=std::max( val[n-1]+knapSack(W-wt[n-1],wt,val,n-1) , knapSack(W,wt,val,n-1) );   
    }
    
    return KS[W][n]; 
}

int main() 
{ 
    std::vector <int> val = {60, 100, 120}; 
    std::vector <int> wt  = {10, 20, 30}; 
    int  W = 50; 
  
    int n = val.size(); 
    std::sort(val.begin(),val.end());                   //This KnapSack() only works with sorted data     
    std::sort(wt.begin(),wt.end());
    
    std::cout<<knapSack(W, wt, val, n);
    
    return 0; 
} 
