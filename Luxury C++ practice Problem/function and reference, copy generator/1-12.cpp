#include <iostream>
using namespace std;

class Dept{
  int size;
  int *scores;
public:
  Dept(int size){
    this->size = size;
    scores = new int[size];
  }
  Dept(const Dept& dept){

    this->scores = new int[size];
    this->size = dept.size;
    for(int i = 0; i< size; i++){
      this->scores[i] = dept.scores[i];
    }

  }
  ~Dept(){
    if(scores){
      delete scores;
    }
  }
  int getSize(){
    return size;
  }
  void read(){
    cout << "Enter 10 Integer scores: ";
    for(int i =0; i<size;i++){
      cin >> scores[i];
    }
  }
  bool isOver60(int index){
    if(scores[index] >= 60)
      return true;
    else
      return false;
  }
};
int countPass(Dept dept){ // -> int countPass(Dept &dept)하면 복사 생성자를 삭제해도 된다.
  int count = 0;
  for(int i =0; i<dept.getSize(); i++){
    if(dept.isOver60(i))
      count++;
  }
  return count;
}
// 위 함수가 실행될때 복사 생성자가 만들어 진다 그렇게 되면 깊은 복사 생성자를 만들지 않았을때
// 복사 생성자의 scores 가 반환이 된다. com의 scores는 복사생서자의 scores와 같은 주소이기 때문에
// 복사 생성자의 scores가 반환 될때 같이 반환 돼서 런타임오류가 발생하게 된다. 그러기 꼭 깊은 봇사 생성자를
//만들거나 참조 연사자를 활용해 코드를 작성하도록 하자!
int main(){
  Dept com(10);
  com.read();
  int n =countPass(com);
  cout << "A score of 60 or higher is " << n <<"."<<endl;
}
