#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    int yourScore;
    int compScore;
    cout<<"Welcome to Rock Paper Scissors!"<<endl;
    while(true){
        string options[]={"rock","paper", "scissors"};
        string tie="It's a tie!";
        string win="You win! :)";
        string lose="You lose :(";
        string compsSelection;
        string input;
        string answer;
        cout<<"Choose rock, paper, or scissors"<<endl;
        cin>>input;
        int randIndex=rand() % 3;
        compsSelection=options[randIndex];
        cout<<"Computer chose: "<<compsSelection<<endl;
        if(input==compsSelection)
            cout<<tie<<endl;
        if(input=="rock"&&compsSelection=="paper"){
            cout<<lose<<endl;
            compScore+=1;
        }
        if(input=="paper"&&compsSelection=="rock"){
            cout<<win<<endl;
            yourScore+=1;
        }
        if(input=="rock"&&compsSelection=="scissors"){
            cout<<win<<endl;
            yourScore+=1;
        }
        if(input=="scissors"&&compsSelection=="rock"){
            cout<<lose<<endl;
            compScore+=1;
        }
        if(input=="paper"&&compsSelection=="scissors"){
            cout<<lose<<endl;
            compScore+=1;
        }
        if(input=="scissors"&&compsSelection=="paper"){
            cout<<win<<endl;
            yourScore+=1;
        }
        cout<<"Your score: "<<yourScore<<endl<<"Computer's score: "<<compScore<<"\n \n \n";
        cout<<"Play again? yes or no"<<endl;
        cin>>answer;
        if(answer=="no")
            return 0;
    }
}
