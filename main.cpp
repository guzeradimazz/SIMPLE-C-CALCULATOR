//
//  main.cpp
//  SUPER_CALCULATOR
//
//  Created by Дима Гузерчук on 24.12.20.
#include <iostream>
using namespace std;

void CLEAR_SCREEN();

void SUM(char operation){
    float A,B;
    CLEAR_SCREEN();
    cout << "Okay, ur choise summator" << endl;
    cout << "Enter first number\n>";
    cin >> A;
    cout << "Enter second number\n>";
    cin >> B;
    cout << "Sum = " <<A+B << endl;
}
void MIN(char operation){
    float A,B;
    CLEAR_SCREEN();
    cout << "Okay, ur choise minus" << endl;
    cout << "Enter first number\n>";
    cin >> A;
    cout << "Enter second number\n>";
    cin >> B;
    cout << "Min = " <<A-B << endl;
}
void MULTI(char operation){
    float A,B;
    CLEAR_SCREEN();
    cout << "Okay, ur choise multiple" << endl;
    cout << "Enter first number\n>";
    cin >> A;
    cout << "Enter second number\n>";
    cin >> B;
    cout << "Multi = " <<A*B << endl;
}
void DIV(char operation){
    float A,B;
    CLEAR_SCREEN();
    cout << "Okay, ur choise division" << endl;
    cout << "Enter first number\n>";
    cin >> A;
    cout << "Enter second number\n>";
    cin >> B;
    while (B == 0) {
        cout << "B can't represented by '0'!!!\n>";
        cin >> B;
    }
    cout << "Division = " <<A/B << endl;
}
void COS(char operation){
    CLEAR_SCREEN();
    double A;
    cout << "Ur choise is cosinus\nEnter number\n>";
    cin >> A;
    cout << cos(A) << endl;
}
void SIN(char operation){
    CLEAR_SCREEN();
    double A;
    cout << "Ur choise is sinus\nEnter number\n>";
    cin >> A;
    cout << sin(A) << endl;
}
void TAN(char operation){
    CLEAR_SCREEN();
    double A;
    cout << "Ur choise is tangens\nEnter number\n>";
    cin >> A;
    cout << tan(A) << endl;
}
void PERSENT(char operation){
    CLEAR_SCREEN();
    double A, C, B;
    cout << "Ur choise is persen\nEnter percent\n>";
    cin >> B;
    cout << "Enter number from which we calculate percent\n>";
    cin >> A;
    C = A *(B/100);
    cout << B <<"%" << " from the number " << A << "  = " << C << endl;
}

void CLEAR_SCREEN(){
    for (int i = 0; i < 25; i++) {
        cout <<"\n\n";
    }
}

int main() {
    TRY_AGAIN:
    char operation;
    
    cout << "Choose operation\n (+) (-) (*) (/)\n (cos enter c) (sin enter s) (tan enter t) (%)\n>";
    cin >> operation;
    
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/'
           && operation == 'c' && operation == 's' && operation == 't' && operation == '%') {
        CLEAR_SCREEN();
        cout << "Incorrect operation!" << endl;
        cout << "Choose operation\t (+) (-) (*) (/)\n>";
        cin >> operation;
    }
    if (operation == '+') {
        SUM(operation);
    }else if (operation == '-') {
        MIN(operation);
    }else if (operation == '*') {
        MULTI(operation);
    }else if (operation == '/') {
        DIV(operation);
    }else if (operation == 'c') {
        COS(operation);
    }else if (operation == 's') {
        SIN(operation);
    }else if (operation == 't') {
        TAN(operation);
    }else if (operation == '%') {
        PERSENT(operation);
    }


    
    
    
    char GO_TO;
    cout << "Do you want to do one more operation?\nEnter + or -\n>";
    cin >> GO_TO;
    if (GO_TO == '+') {
        CLEAR_SCREEN();
        goto TRY_AGAIN;
    }else{
        cout << endl;
        return 0;
    }
}
