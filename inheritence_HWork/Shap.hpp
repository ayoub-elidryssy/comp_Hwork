#include <iostream>


# ifndef SHAP_HPP
# define SHAP_HPP

class Shap
{
Shap& operator=(const Shap& SH0);
int x;
protected:
    std::string name;
public:
    Shap();
    Shap(const std::string& name1);
    Shap(const Shap& SH0);
    void setname(const std::string& name1);
    const std::string& getname() const;
    ~Shap();
};

#endif