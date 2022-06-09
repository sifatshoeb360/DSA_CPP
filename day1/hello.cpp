#include<iostream>
using namespace std;


int fibo(int n){

    if(n==0){
        return n;
    }
    else if (n==1)
    {
        return n;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout<<fibo(i)<<",";
    }
    
    return 0;
}