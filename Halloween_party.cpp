#include <iostream>
#include<cmath>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main( ) 
{ 
  std::ios_base::sync_with_stdio("false");
  std::cin.tie(NULL);
  std::cout.tie(NULL);
   int t;
   std::cin>>t;
   while(t--)
   {
     long long int K;
     std::cin>>K;
     if (K%2==0)
     {
       K/=2;
       K*=K;
     }
     else
     {
       K/=2;
       K*=(K+1);
     }
     Log(K);
   }               
}
