#include <iostream>
#include <cstdlib>
#include <ctime>  

using namespace std;
//Function for winning 
string determineWinner(string player1Choice, string player2Choice) {
    if (player1Choice == player2Choice) {
        return "It's a tie!";
    }

    if ((player1Choice == "ROCK" && player2Choice == "SCISSOR") ||
        (player1Choice == "SCISSOR" && player2Choice == "PAPER") ||
        (player1Choice == "PAPER" && player2Choice == "ROCK")) {
        return "Player 1 wins!";
    } else {
        return "Player 2 wins!";
    }
}

int main (){
//the moves available
string hmove;
string omoves[]={"ROCK", "PAPER", "SCISSOR"};


//taking input 
cout << "Pick your first move- ";
cin >> hmove;
for (auto &c : hmove) c = toupper(c); 
if(hmove != "ROCK" && hmove != "SCISSOR" && hmove != "PAPER"){
    cout << "Invalid move"<<endl;
    return 1;
}
cout << hmove <<endl;
//return a result
srand(time(0));  
int r =(rand() %3);
cout << omoves[r] <<endl;

//Winner
string omove=omoves[r];
 //making sure all the results are UPPERCASE 
for (auto &c : omove) c = toupper(c);
string result = determineWinner(hmove , omove);

cout <<result <<endl;


    return 0;
}