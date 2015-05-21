#include "Color.h"
#include <ostream>
#include <string>



Color::Color() {}

Color::Color(std::string& colorcode): colorcode(colorcode){}


void Color::SetColorcode(const std::string& colorcode)
{
    this->colorcode = colorcode;
}
const std::string& Color::GetColorcode() const
{
    return colorcode;
}

std::ostream& operator<<(std::ostream& os, const Color &obj) {
    os << "<Color(" << obj.GetColorcode() << ")";
    return os;
}