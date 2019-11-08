#include <iostream>
#include <string>
#define ARRAY_MAX 1000

using namespace std;

class community {
        static string *textArray;
        static int num; // 게시판에 올라간 글 수
public:
        static void add(string text); // 게시판에 글 추가하기
        static void print(); // 게시판에 쓰여진 글 출력하기
};
