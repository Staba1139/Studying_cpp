#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b;

    cout << "2つの整数を入力: " << "\n";
    cin >> a >> b;
    cout << "最大公約数は " << gcd(a, b) ;
    
    return 0;
}