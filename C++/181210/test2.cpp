#include<iostream>
#include<string>
using namespace std;

class human{
  public:
    int age;
    string name;
    string sex;
};

int main(){
  human user;
  //クラス「human」のオブジェクト「user」
  
  cout << "名前は？" << endl;
  cin >> user.name;
  
  cout << "年齢は？" << endl;
  cin >> user.age;

  cout << "性別は？" << endl;
  cin >> user.sex;
  
  cout << user.name << " " << user.age << " " << user.sex << endl;
}
