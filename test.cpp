
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int n, m; // n: vertex(정점)의 개수, m: edge(간선)의 개수
int s, e; // s: start(시작지점), e: end(끝지점)
vector<vector<int>> adjArray;// vector-vector를 선언
vector<bool> visited; // node의 방문 여부에 대한 함수
stack<int> R;
char IoT_Class[][30] = {
"IoT개론", "기초수학", "C프로그래밍", "정보통신개론", "논리회로",
"전기전자회로", "자료구조", "알고리즘", "임베디드시스템기초",
"컴퓨터네트워크", "IoT플랫폼", "운영체제", "마이크로프로세서", "캡스톤디자인"
};
void DFS_TS(int v) {
  visited[v] = 1;
  for(){

  }

  }
}
void topologicalSort2() {
  visited[]
}

void AddEdge(int start, int end) {
        adjArray[start].push_back(end);
}
int main() {
        cin >> n >> m;
        adjArray.resize(n + 1);
        visited.resize(n+ 1);
        for(int i = 0; i < m; i++) {
                cin >> s >> e;
                AddEdge(s, e);
        }
        topologicalSort2();
        while(R.size()) {
                cout << IoT_Class[R.top()-1] << " ";
                R.pop();
                if(R.size() != 0) cout << " --> ";
        }
}
