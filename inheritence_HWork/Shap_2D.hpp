# include "Shap.hpp"

# ifndef SHAP_2D_HPP
# define SHAP_2D_HPP

class Shap_2D: virtual public Shap
{
int Area;
int Ocen;
Shap_2D& operator=(const Shap_2D& other);
public:
    Shap_2D();
    Shap_2D(const std::string& name);
    Shap_2D(const Shap_2D& SH_2D0);
    void setArea(int area);
    void setOcen(int ocen);
    const int& getArea() const;
    const int& getOcen() const;
    ~Shap_2D();
};

#endif