class abc{
public:
  virtual void foo()=0;
private:
  int myInt;
};

class xyz : public abc
{
    virtual void foo();
};

#include <iostream>
#include <ostream>

void xyz::foo()
{
    std::cout << "xyz::foo()\n";
    abc::foo();
}

void abc::foo()
{
    std::cout << "abc::foo(): " << myInt++ << '\n';
}

#include <memory>

class ZTest{
    private:
        int a;
    public: 
        // ZTest() {
        //     std::cout <<"123" << std::endl;
        // };
        void Do() {a++;};
        void print() {std::cout << a << std::endl;}
};

int main()
{
    std::auto_ptr<abc> b( new xyz() ); // value-initialization important
    // std::cout << b->myInt;
    b->foo();
    b->foo();
    b->foo();
    b->foo();
    std::auto_ptr<ZTest> z(new ZTest());
    z->Do();
    z->print();

    ZTest z2 = ZTest();
    z2.print();
}