#include <iostream>
using namespace std;

int main(){
    char opsym = '1';
    double fnum;
    double snum;
    double result;

    while(!(opsym == '*' || opsym== '/' || opsym == '+' || opsym == '-')){
        cout << "Input * or / or + or -" << endl;
        cin >> opsym;
    }

    cout << "Input two numbers" << endl;
    cin >> fnum;
    cin >> snum;

    switch(opsym){
        case '*':
            result = fnum * snum;
            break;
        case '/':
            while(snum == 0){
                cout << "Can not divide by zero. Enter a new number." << endl;
                cin >> snum;
            }
            result = fnum / snum;
            break;
        case '-':
            result = fnum - snum;
            break;
        case '+':
            result = fnum + snum;
            break;
    }

    cout << "Result is " << result << endl;

    return 0;
}
