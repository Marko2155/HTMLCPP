#include <string>
#include <fstream>
#include <iostream>

class HTML {
public:
    void addElement(std::string Element);
    void outputToFile(std::string FileName);
    void addJS(std::string JS[]);
    void addCSS(std::string CSS[]);
    std::string showHTMLCode();
protected:
    std::string Code;
};