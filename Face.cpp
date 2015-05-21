#include "Face.h"
#include "Color.h"

Face::Face(){}

Face::Face(Vertex alpha, Vertex beta, Vertex gamma, Color color) :
           alpha(alpha), beta(beta), gamma(gamma), color(color){};

void Face::SetAlpha(const Vertex& alpha)
{
    this->alpha = alpha;
}
void Face::SetBeta(const Vertex& beta)
{
    this->beta = beta;
}
void Face::SetGamma(const Vertex& gamma)
{
    this->gamma = gamma;
}
void Face::SetColor(const Color& color)
{
    this->color = color;
}
const Vertex& Face::GetAlpha() const
{
    return alpha;
}
const Vertex& Face::GetBeta() const
{
    return beta;
}
const Vertex& Face::GetGamma() const
{
    return gamma;
}
const Color& Face::GetColor() const
{
    return color;
}

std::ostream& operator<<(std::ostream& os, const Face &obj) {
    os << "<Face(" << obj.GetAlpha() << "," << obj.GetBeta() << "," << obj.GetGamma() << ")\n\b";
    return os;
}
