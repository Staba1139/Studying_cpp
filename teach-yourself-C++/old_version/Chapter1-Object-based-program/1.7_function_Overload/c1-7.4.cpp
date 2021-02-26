/*
文字列を逆順にするrev_str()という関数を作成
rev_str()関数をオーバーロード，引数として文字列を1つでも2つでも渡すことができるようにする．
文字列を1つ指定して呼び出した場合，その文字列に逆順の文字列を格納．
文字列を2つ指定して呼び出した場合，2つ目の引数に逆順の文字列を返す．
例:
    char s1[80], s2[80];
    strcpy(s1, "hello");
    rev_str(s1, s2);
    rev_str(s1);
*/

#include <iostream>
#include <cstring>
using namespace std;

//文字列取得関数をオーバーロードする
void rev_str(char *s);              //文字列をその場で逆順にする
void rev_str(char *in, char *out);  //逆順にした文字列をoutに格納する

int main(){
    char s1[80], s2[80];
    strcpy(s1, "This is a test");

    rev_str(s1, s2);
    cout << s2 << "\n";

    rev_str(s1);
    cout << s1 << "\n";

    return 0;
}

//文字列を逆順にし，結果をsに格納する
void rev_str(char *s){
    char temp[80];
    int i, j;

    for(i=strlen(s)-1, j=0; i>=0; i--, j++)
        temp[j] = s[i];
    
    temp[j]  = '\0';

    strcpy(s, temp);
}

//文字列を逆順にし，結果をoutに格納する
void rev_str(char *in, char *out){
    int i, j;
    
    for(i=strlen(in)-1, j=0; i>=0; i--, j++)
        out[j] = in[i];
    
    out[j] = '\0';

}



