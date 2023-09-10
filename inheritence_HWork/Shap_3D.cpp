#include "Shap_3D.hpp"

Shap_3D::Shap_3D(): Shap(){
    std::cout<<"Defult constauctor of Shap_3D clled\n";
    volume = 0;
}

Shap_3D::Shap_3D(const std::string& name1): Shap(name1){
    volume = 0;
}

Shap_3D::Shap_3D(const Shap_3D& other): Shap(other){
    *this = other;
}

Shap_3D& Shap_3D::operator=(const Shap_3D& other){
    if (this != &other){
        volume = other.getvolume();
    }
    return *this;
}

const int& Shap_3D::getvolume() const{
    return volume;
}

void Shap_3D::setvolume(const int& V1){
    volume = V1;
}

Shap_3D::~Shap_3D(){
    std::cout<<"Destractor of Shap_3D "<<name<<" called\n";
}
