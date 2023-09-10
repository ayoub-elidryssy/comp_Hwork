#include "Shap_2D.hpp"

Shap_2D::Shap_2D(){
    std::cout<<"Defult constauctor of Shap_2d clled\n";
    Area = 0;
    Ocen = 0;
}

Shap_2D::Shap_2D(const std::string& name): Shap(name){
    Area = 0;
    Ocen = 0;
}

Shap_2D::Shap_2D(const Shap_2D& other): Shap(other){
    *this = other;
}

Shap_2D& Shap_2D::operator=(const Shap_2D& other){
    if (this != &other){
        Area = getArea();
        Ocen = getOcen();
    }
    return *this;
}

void Shap_2D::setArea(int area){
    Area = area;
}

void Shap_2D::setOcen(int ocen){
    Ocen = ocen;
}

const int& Shap_2D::getArea() const{
    return Area;
}

const int& Shap_2D::getOcen() const{
    return Ocen;
}

Shap_2D::~Shap_2D(){
    std::cout<<"Destractor of Shap_2D "<<name<<" called\n";
}
