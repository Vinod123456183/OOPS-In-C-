    #include <iostream>
    using namespace std;
    class A {
        protected :
            int a ,  b ;
        public :
            void get_a_b ()  {
                cout << "Enter a , b" << endl;
                cin >> a >> b;
            }
    };
    class B : public A {
        protected :
            int c ;
        public :
            void add() {
                cout << "Add "<< a+b;
            }
    };

    class C : public A {
        protected :
            int d ;
        public :
            void sub() {
                cout << "sub "<< a - b;
            }
    };
    int main() {
      
        B aaa;
        aaa.get_a_b();
        aaa.add();

        // Creating C Class Obj so we can perform only C thing 
        // we cannot use add option here
        C aa ;
        aa.get_a_b();
        aa.sub();

    }
