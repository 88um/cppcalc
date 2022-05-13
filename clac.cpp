
#include <iostream>
#include <string>
using namespace std;

//my first of many

double add(double number1, double number2){
    return number1 + number2;
}

double subtract(double number1, double number2){
    return number1 - number2;
}

double multiply(double number1, double number2){
    return (number1 * number2);
}

double divide(double number1, double number2){
    return (number1 / number2);
}

int main() {
    double fnum;
    double snum;
    string operate;
    cout << "[+] Enter first number: ";
    cin>>fnum;
    cout<<"[+] Enter operator (+, -, *, /): ";
    cin>>operate;
    cout<<"[+] Enter second number: ";
    cin>>snum;
    if (operate == "*"){
        cout<<"\n[!] Your answer is: "<<multiply(fnum,snum);
    }
    else if (operate == "/"){
        cout<<"\n[!] Your answer is: "<<multiply(fnum,snum);
    }
    else if (operate == "-"){
        cout<<"\n[!] Your answer is: "<<subtract(fnum,snum);
    }
    else if (operate == "+"){
        cout<<"\n[!] Your answer is: "<<add(fnum,snum);
    }
    else{
        cout<<"[!] Wrong operator choice!";
    }
    return 0;
}
