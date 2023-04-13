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
        system("pause");
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
        system("pause");
        return -1;
    }
    else
        return sqrt(x);
}

double Exponent(double x, double y)
{
    return pow(x,y);
}

void Calculator()
{
    int operation,x,y;
    do
    {
        cout << "Enter the number of operation you want to use:\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Percentage\n6: Square Root\n7: Exponential\n0: Exit\nYour Choice: ";
        cin >> operation;
        switch (operation)
        {
        case 0:
            break;
        case 1:
            cout << "Enter two numbers you want to add: ";
            cin >> x >> y;
            cout << Addition(x,y) << endl;
            system("pause");
            break;
        case 2:
            int x,y;
            cout << "Enter two numbers you want to subtract: ";
            cin >> x >> y;
            cout << Subtraction(x,y) << endl;
            system("pause");
            break;
        case 3:
            cout << "Enter two numbers you want to multiply: ";
            cin >> x >> y;
            cout << Multiplication(x,y) << endl;
            system("pause");
            break;
        case 4:
            cout << "Enter two numbers you want to divide: ";
            cin >> x >> y;
            if(Division(x,y)==-1)
                break;
            else
                cout << Division(x,y) << endl;
                system("pause");
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> x;
            cout << "Enter what percentage you want to calculate: ";
            cin >> y;
            cout << Percentage(x,y) << endl;
            system("pause");
            break;
        case 6:
            cout << "Enter a number: ";
            cin >>x;
            cout << Square_root(x) << endl;
            system("pause");
            break;
        case 7:
            cout << "Enter the base: ";
            cin >> x;
            cout<<"Enter the exponent: ";
            cin>> y;
            cout << Exponent(x,y) << endl;
            system("pause");
            break;
        default:
            cout << "Enter a valid number!\n";
            system("pause");
            break;
        }
    }while (operation!=0);
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
    Calculator();
}