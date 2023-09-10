#include "Shap.hpp"

Shap::Shap(){
    std::cout<<"Defult constauctor of Shap clled\n";
    name = "unamed_shap";
}

Shap::Shap(const std::string& name1){
    std::cout<<"string constauctor of Shap clled\n";
    name = name1;
}

Shap::Shap(const Shap& SH0){
    *this = SH0;
}

Shap& Shap::operator=(const Shap& SH0){
    if (this != &SH0){
        name = SH0.name;
    }
    return *this;
}

void Shap::setname(const std::string& name1){
    name = name1;
}

const std::string& Shap::getname() const{
    return (name);
}

Shap::~Shap(){
    std::cout<<"Destractor of Shap "<<name<<" called\n";
}
