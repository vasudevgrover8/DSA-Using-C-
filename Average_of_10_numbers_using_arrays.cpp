#include<iostream>
using namespace std;

int main()
{
    float A[10];
    int i;
    int j;
    float sum = 0;
    float avg;
    
    cout << "Enter the elements of array" << endl;
    
    for(i = 0; i < 10; i++)
    {
        cin >> A[i];
    }

    for(j = 0; j < 10; j++)
    {
        sum = sum + A[j];
    }
    
    cout << "The sum of the given elements is: " << sum << endl;
    avg = sum / 10;
    cout << "The average of the given 10 numbers is: " << avg;    

    return 0;
}
