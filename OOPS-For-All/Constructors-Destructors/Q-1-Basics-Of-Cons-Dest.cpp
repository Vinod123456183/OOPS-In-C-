#include<bits/stdc++.h>
using namespace std;

class customers{
    public:
    string name;
    int rno;
    
    customers(string name_,int rno_ ) {
        name=name_;
        rno=rno_;
    }
    
  void ans() {
        cout << name << " " << rno;
    }  
};
int main ()  {
    // we cannot manulay paas bec it is a function
    customers c("V",10);
    c.ans();
    
}
