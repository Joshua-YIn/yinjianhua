#include <iostream>

using namespace std;

int CalculateSum(int input) 
{
    int result = 0;
    for (int i = 1; i <= input ; i++) {
        result += i;
    }
    return result;
}

int main()
{
    cout << endl << "Hello every one, It is my first day using Visual Studio Code." << endl;

    cout << "Please cin an positive interger," << 
        "The program will calcute the sum of num thatis not bigger than the One you input" << endl;
    int input = 0;
    cin >> input;
    cout << "Sum From 0 to " << input << " is " <<  CalculateSum(input) << endl;

    system("Pause");
    return 0;
}
