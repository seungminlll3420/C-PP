#include <iostream>
#include <string>
#include <vector>
#include "cast.h"
using namespace std;

class vector_cast {
vector<cast> casts;         // 출연자들을 저장할 vector 선언
string name;         // 출연자 이름
int age;         //출연자 나이
string Entertainment;         // 출연자 소속사
public:
void cast_add(vector<casts> cast, string name, int age, string Entertainment);         // vector에 출연자 추가하기
void cast_delete(vector<casts> cast, string name);         // vector에 출연자 삭제하기
void cast_modify(vector<casts> cast, string name, int age, string Entertainment);         // vector에 있는 출연자 정보 수정하기
}
