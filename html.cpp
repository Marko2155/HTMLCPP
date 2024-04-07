#include "html.h"



void HTML::addJS(std::string JS[]) {
    std::ofstream jsfile("main.js");
    Code.append("<script src=\"main.js\"></script>");
    for (int i = 0; i < JS->length(); i++) {
        jsfile << JS[i] << std::endl;
    }
    jsfile.close();
}

std::string HTML::showHTMLCode() {
    return Code;
}

void HTML::addElement(std::string Element) {
    if (!Element.find("<script>")) {
        std::cout << "[HTMLCPP] You have tried to manually add a script to the page. Use HTML::add_script_to_page(std::string javascript) to add a script beside the HTML page." << std::endl;
    } else {
        Code.append(Element + "\n");
    }
}

void HTML::outputToFile(std::string Filename) {
    std::ofstream htmlFile(Filename);
    htmlFile << Code;
    htmlFile.close();
}

void HTML::addCSS(std::string CSS[]) {
    std::ofstream cssfile("style.css");
    Code.insert(0, "<link rel=\"stylesheet\" href=\"style.css\"></style>");
    for (int i = 0; i < CSS->length(); i++) {
        cssfile << CSS[i] << std::endl;
    }
    cssfile.close();
}