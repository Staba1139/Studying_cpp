//年齢当てゲームの実装
#include <iostream>

int main() {
    std::cout << "Start Game!!" << std::endl;

    //Aさんの数の候補を表す区間を，[left, right) と表す
    int left = 20, right = 36;

    //Aさんの数を1つに絞れないうちは繰り返す
    while(right - left > 1) {
        int mid = left + (right - left) / 2;  //区間の真ん中

        //mid 以上かを聞いて、回答をyes/no で受け取る
        std::cout << "Is the age less than " << mid << " ? (yes / no)" << std::endl;
        std::string ans;
        std::cin >> ans;

        //回答に応じて，あり得る数の範囲を絞る
        if (ans == "yes") right = mid;
        else left = mid;
    }

    //ズバリ当てる！
    std::cout << "The age is " << left << "!" << std::endl;
}
