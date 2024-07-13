#include <bits/stdc++.h>
using namespace std;

void guessGame(){
    srand(time(0)); //seeding random number generator
    int num = rand() % 100 +1;//Generates random number between 0 and 100
    
    int guess = 0;
    cout<<"WELCOME TO THE NUMBER GUESSING GAME"<<endl;
    cout<<"--------------***********--------------"<<endl;
    cout<<endl;
    cout<<"Guess the number X"<<endl;
    cout<<"It's between 0 and 100"<<endl;
    
    while (guess!=num){
        cout<<"Enter your guess: ";
        cin>>guess;

        if (guess>num){
            cout<<"Oops too high! Try again."<<endl;
        } 
        else if (guess<num){
            cout<< "Oops too low! Try again."<<endl;
        } 
        else{
           cout<<endl;
           cout<<"That is right! Congratulations!"<<endl;
        }
    }
}

int main() {
    guessGame();
    return 0;
}
