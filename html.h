#include <string>
#include <fstream>
#include <iostream>

class HTML {
public:
    void addElement(std::string Element);
    void outputToFile();
    void addJS(std::string JS[]);
    void addCSS(std::string CSS[]);
    void setName(std::string Name);
    void clearCode();
    std::string showHTMLCode();
protected:
    std::string Code;
    std::string Name;
};