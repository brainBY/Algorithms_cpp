#include <iostream>
#include <queue>
#include <vector> // 데이터 넣어주려고 벡터를 씀

using namespace std;

int number =7;
int c[7];//방문처리 checked
vector<int> a[8];// index가 1부터 처리되게 하려고 크기는 8로

void bfs(int start){
    queue<int> q;
    q.push(start);
    c[start]= true;
    
    while(!q.empty()){
        int x= q.front();//하나 꺼냄
        q.pop();
        printf("%d ",x);
        for(int i=0;i<a[x].size();i++){
            int y =a[x][i];
            if(!c[y]){
                q.push(y);
                c[y]=true;
            }
        }
    }
    
}

int main(){
    a[1].push_back(2);
    a[2].push_back(1);
    
    a[1].push_back(3);
    a[3].push_back(1);
    
    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);
    
    a[2].push_back(5);
    a[5].push_back(2);

    a[3].push_back(6);
    a[6].push_back(3);
    
    a[3].push_back(7);
    a[7].push_back(3);
    
    a[4].push_back(5);
    a[5].push_back(4);
    
    a[6].push_back(7);
    a[7].push_back(6);

    bfs(1);

    return 0;


}