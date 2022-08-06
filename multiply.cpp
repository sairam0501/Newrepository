/*

  This program gives us multiplication of two numbers;

*/
#include<iostream>
using namespace std;

int multiplication(int a,int b)
{
   
   return a*b;

}

int main()
{
     int a,b;
     cout<<"enter the numbers a and b :";
     cin>>a>>b;

      int ans=multiplication(a,b);
       cout<<"Multiplication of two numbers : "<<ans;
       
    return 0;
}