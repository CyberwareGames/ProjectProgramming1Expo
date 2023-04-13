#include <iostream>
#include <cmath>
using namespace std;

double Addition(double x,double y)
{
    return x+y;
}

double Subtraction(double x, double y)
{
    return x-y;
}

double Multiplication(double x, double y)
{
    return x*y;
}

double Division(double x, double y)
{
    if (y==0)
    {
        cout << "Syntax Error"<<endl;
        return -1;
    }
    else
        return x/y;
}

double Percentage(double x, double y)
{
    return (x*y)/100;
}

double Square_root(double x)
{
    if(x<0)
    {
        cout<<"Math Error";
        return -1;
    }
}

double Exponent()
{

}

void Calculator()
{

}

void Hangman()
{

}

void TicTacToe()
{

}

void Stop_Watch()
{

}

int main(){

}