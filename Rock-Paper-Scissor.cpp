#include<iostream>
using namespace std;

//A rock paper scissor game made using functions, and rand_Number generator


int getComputerChoice(){
    //This function generates a random number ranging from 1 to 3 and returns the value 
    int ComputerChoice = (rand() % 3) + 1;
    return ComputerChoice;
}

int getUserChoice(){
    //This function takes the input of the user and assigns the value of the string input of the user
    string UserChoice;
    int user = 0;

    cout << "Please enter your choice (rock,paper,scissor): ";
    cin >> UserChoice;

    if(UserChoice == "rock"){
        user = 1;
    } else if(UserChoice == "scissor"){
        user = 2;
    } else if(UserChoice == "paper"){
        user = 3;
    } else{
        cout << "please enter a proper value";
    }

    return user;
}

string determineWinner(int user, int ComputerChoice){
    //This function is the actual game

        //considering that even for computer the values for rock scissor and paper are 1,2,3.

        string result;


        switch (user)
        {
            //case for the user's choice is rock
        case 1:
            if(ComputerChoice == 1){
                result = "draw";
            } else if(ComputerChoice == 2){
                result = "You loose";
            } else if(ComputerChoice == 3){
                result = "You win";
            }
            break;
            //case for the user's choice is scissor
        case 2:
            if(ComputerChoice == 1){
                result = "You loose";
            } else if(ComputerChoice == 2){
                result = "draw";
            } else if(ComputerChoice == 3){
                result = "You win";
            }
            break;
    
            //case for the user's choice is paper
        case 3:
            if(ComputerChoice == 1){
                result = "You win";
            } else if(ComputerChoice == 2){
                result = "You loose";
            } else if(ComputerChoice == 3){
                result = "draw";
            }
            break;
        
        default:
            break;
        }
        return result;
    
}


int main()
{
    int counter = 0;
    srand(time(NULL));
    //here we will make the players play for three times to check their luck in Best Of Three.

    for(int i = 1; i <= 3; i++){
        

        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        //we store the result i.e. won/loose/draw in score to display it and compare
        string score = determineWinner(userChoice,computerChoice);
        
        cout << score << endl;
        //here we will compare the score if is You win or not and then decide to increase the counter
        if(score == "You win"){
            counter++;
        }
    }

    //we print the result here
    cout << "In best of three, you've won " << counter << " times";

    return 0;
} 
