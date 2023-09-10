# include "Shap.hpp"

# ifndef SHAP_3D_HPP
# define SHAP_3D_HPP

class Shap_3D: virtual public Shap
{
int volume;
Shap_3D& operator=(const Shap_3D& other);
public:
    Shap_3D();
    Shap_3D(const std::string& name);
    Shap_3D(const Shap_3D& other);
    void setvolume(const int& V1);
    const int& getvolume() const;
    ~Shap_3D();
};

#endif