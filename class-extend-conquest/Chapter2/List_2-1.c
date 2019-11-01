//手続き型プログラミング(C言語)によるじゃんけんゲーム

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 0
#define SCISSSORS 1
#define PAPER 2

#define WIN 0
#define LOSE 1
#define DRAW 2

int getUserHand();
int getComputerHand();
int doJudge(int user, int computer);
void showJudge(int judge);

int main(){
    int user, computer, judge;

    srand(time(NULL));
    user = getUserHand();
    computer = getComputerHand();
    judge = doJudge(user, computer);

    showJudge(judge);

    return 0;

}

int getUserHand(){
    int hand;

    printf("0: グー、1: チョキ、2:パー\n");
    printf("ユーザーの手=");
    scanf("%d", &hand);
    return hand;
}

int getComputerHand(){
    int hand;
    hand = rand() % 3;
    printf("コンピュータの手＝%d\n", hand);
    return hand;
}

int doJudge(int user, int computer){
    int judge;
    if(user == computer){
        judge = DRAW;

    }
    else if(user == ROCK && computer == SCISSSORS ||
            user == SCISSSORS && computer == PAPER ||
            user == PAPER && computer == ROCK){
                judge = WIN;
    }
    else{
        judge = LOSE;
    }

    return judge;
}

void showJudge(int judge){
    if(judge == WIN){
        printf("You're Win!!\n");
    }
    else if(judge == LOSE){
        printf("You're Lose...\n");
    }
    else if(judge == DRAW){
        printf("Draw\n");
    }
}
