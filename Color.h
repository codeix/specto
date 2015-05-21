#ifndef COLOR_H
#define COLOR_H
#include <ostream>
#include <string>

class Color{

private:
    std::string colorcode;

public:
    Color();
    Color(std::string& colorcode);

void SetColorcode(const std::string& colorcode);
const std::string& GetColorcode() const;

};

std::ostream& operator<<(std::ostream& os, const Color& obj);

#endif // COLOR_H
