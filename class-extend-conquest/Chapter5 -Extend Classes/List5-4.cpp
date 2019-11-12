#include "List5-2.h"

class NewClass : public MyClass{
    public:
        void MyFunc();
};

//メンバ関数の実装
void NewClass::MyFunc(){
    //継承されたメンバを使う
    pub_data = 123;
    //pri_data = 456;
    pro_data = 789;
}
