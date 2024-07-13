#include <iostream>
using namespace std;

int main() {
    cout<<"BASIC CALCULATOR"<<endl;
    cout<<endl;
    
    int choice;
    while(true){
    cout<<"Enter 1 for addition"<<endl<<"Enter 2 for subtraction"<<endl<<"Enter 3 for multiplication"<<endl<<"Enter 4 for division"<<endl<<"Enter 0 to exit"<<endl;//Menu
    cout<<endl;
    
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout <<"Enter second number: "<<endl;
    cin >>num2;
    
    cout<<"Enter the operation: "<<endl;
    cin>>choice;
    switch(choice) {
        case 1:
            cout<<"Result: "<<num1 + num2<<endl;
            break;
        case 2:
            cout<<"Result:" <<num1 - num2<<endl;
            break;
        case 3:
            cout<<"Result: " <<num1 * num2<<endl;
            break;
        case 4:
            if(num2 != 0)
                cout<<"Result: " <<num1 / num2<<endl;
            else
                cout<<"Error! Division by zero."<<endl;
            break;
         case 0:
            cout<<"Thank you. Bye!";
            return 0;
        default:
            cout<<"Invalid operator!"<<endl;
            break;
        }
        cout<<"---------------------------"<<endl;
        cout<<endl;
    }

}
