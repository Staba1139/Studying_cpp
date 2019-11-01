//オブジェクト指向によるじゃんけん

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ROCK 0
#define SCISSORS 1
#define PAPER 2

#define WIN 0
#define LOSE 1
#define DRAW 2

class User{
    private:
        int hand;
    public:
        void setHand();
        int getHand();

};

void User::setHand(){
    cout << "0:ROCK, 1: SCISSORS, 2: PAPER\n";
    cout << "Choose user's hand......";
    cin >> hand;

}

int User::getHand(){
    return hand;

}

class Computer{
    private:
        int hand;
    public:
        void setHand();
        int getHand();

};

void Computer::setHand(){
    hand = rand() % 3;
}

int Computer::getHand(){
    cout << "Computer's hand ......" << hand << "\n";
    return hand;
}

class Judge{
    private:
        int judge;
    public:
        void doJudge(User u, Computer c);
        void showJudge();

};

void Judge::doJudge(User u, Computer c){
    int user, computer;

    user = u.getHand();
    computer = c.getHand();

    if(user == computer){
        judge = DRAW;

    }
    else if(user == ROCK && computer == SCISSORS ||
            user == SCISSORS && computer == PAPER ||
            user == PAPER && computer == ROCK){
                judge = WIN;

            }
    else{
        judge = LOSE;
    }
}

void Judge::showJudge(){
    if(judge == WIN){
        cout << "User won!\n";
    }
    else if(judge == LOSE){
        cout << "You're lose...\n";
    }
    else if(judge == DRAW){
        cout << "Draw\n";
    }
}


int main(){
    User user;
    Computer computer;
    Judge judge;

    srand(time(NULL));

    user.setHand();
    computer.setHand();

    judge.doJudge(user, computer);

    judge.showJudge();

    return 0;
}
