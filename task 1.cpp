#include<iostream>
using namespace std;
int main()
{
    cout<<"CALCULATOR THAT PERFORMS BASIC ARITHMETIC CALCULATIONS"<<endl;
    float n1,n2,ans;
    char x;
    cout<<"Enter First Number: "<<endl;
    cin>>n1;
    cout<<"Enter Second Number: "<<endl;
    cin>>n2;
    cout<<"Enter any 1 operator(+,-,*,/)"<<endl;
    cin>>x;
    switch(x)
    {
        case '+':
        {
            ans=n1+n2;
            break;
        }
        case '-':
        {
            ans=n1-n2;
            break;
        }
        case '*':
        {
            ans=n1*n2;
            break;
        }
        case '/':
        {
            ans=n1/n2;
            break;
        }
    }
    cout<<"The answer is: "<<ans;
}