#include "Shap_2D.hpp"
#include "Shap_3D.hpp"

class A{
std::string name;
public:
    A(const std::string& name1){
        name = name1;
        std::cout<<"Defult Constructor of: A -> called\n";
    }
    virtual void print(){
        std::cout<<"Message From Class A\n";
    }
    virtual void assining(int x = 0){
        std::cout<<x<<"\n";
    }
    virtual ~A(){
        std::cout<<"Destructor of: A -> called\n";
    }
};

class B: public A{
std::string name;
public:
    B(const std::string& name1): A(name1){
        name = name1;
        std::cout<<"Defult Constructor of: B ->  called\n";
    }
    void print(){
        std::cout<<"Message From Class B\n";
    }
    void assining(int x = 1){
        std::cout<<x<<"\n";
    }
    ~B(){
        std::cout<<"Destructor of: B -> called\n";
    }
};

class C: public A{
std::string name;
public:
    C(const std::string& _name): A(_name){
        name = _name;
        std::cout<<"Defult Constructor of: C -> called\n";
    }
    void print(){
        std::cout<<"Message From Class C\n";
    }
    void assining(int x = 2){
        std::cout<<x<<"\n";
    }
    ~C(){
        std::cout<<"Destructor of: C -> called\n";
    }
};

void annonce(A *ptr){
    ptr->print();
    ptr->assining();
}

int main()
{
    A *c = new B("pomp");
    annonce(c);
    delete c;
}