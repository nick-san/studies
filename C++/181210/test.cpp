#include<iostream>
#include<string>
using namespace std;

class kuruma{
  public:
  int bangou;
  //class kurumaを定義し、yamadacarをクラスkurumaに定義
};

int main (){
  kuruma yamadacar;
  //クラス名　オブジェクト名
  //yamadacar を クラスkuruma のオブジェクトとして定義
  yamadacar.bangou = 1234;
  cout << yamadacar.bangou << endl;
}
