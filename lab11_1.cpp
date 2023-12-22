#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    int K=0;
    string grade[]={"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get() ;
    cin.get() ;
    cin.get();
    srand(time(0));
    K=rand()%9;
    cout << "You will get "<< grade[K] << " in this 261102." ;
    return 0;
}
