//HTML code
#include <string>
#include <fstream>

class HTML {
public:
    void add_to_page_body(std::string Element);
    void output_to_file(std::string FileName);
    std::string html_code();
protected:
    std::string Code;
};

std::string HTML::html_code() {
    return Code;
}

void HTML::add_to_page_body(std::string Element) {
    Code.append(Element + "\n");
}

void HTML::output_to_file(std::string Filename) {
    std::ofstream htmlFile(Filename);
    htmlFile << Code;
    htmlFile.close();
}


// Main code

#include <iostream>

int main() {
    HTML htmlObject;
    htmlObject.add_to_page_body("<h1>hi</h1>");
    htmlObject.output_to_file("example.html");
    std::system("open example.html"); // change 'open' depending on your system, mine is MacOS, so i use open
    return 0;
}
