/*Write a program that calculate factorial using loop, while loop and do while looos. The program shoud accept the number then perform the calculation of factorial in c++*/
#include <iostream>
using namespace std;

int main()
{
   /* int num, factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;*/
   

/*Using While Loop
   int num, factorial = 1, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    while(i <= num)
    {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << num << " is " << factorial << endl;*/
    

//Using Do-While Loop

    int num, factorial = 1, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    do
    {
        factorial *= i;
        i++;
    }while(i <= num);
    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}
