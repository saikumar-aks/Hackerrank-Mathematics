#include<iostream>
int meal(int b , int s , int c)
{
    return (b+s-c);
}
int main()
{
    int t;
    std::cin>>t;
    while(t !=0)
    {
        int a , b, c;
        std::cin>>a>>b>>c;
        int result = meal(a,b,c);
        std::cout<<result<<std::endl;
        t--;
    }
}
