#include "html.h"

void HTML::clearCode() {
    Code.clear();
}

void HTML::addJS(std::string JS[]) {
    if (Name == "") {
        std::cout << "[HTMLCPP] Name has not been set." << std::endl;
        exit(1);
    } else {
        std::ofstream jsfile(Name + ".js");
        Code.append("<script src=\"" + Name + ".js\"></script>");
        for (int i = 0; i < JS->length(); i++) {
            jsfile << JS[i] << std::endl;
        }
        jsfile.close();
    }
}

std::string HTML::showHTMLCode() {
    return Code;
}

void HTML::addElement(std::string Element) {
    if (!Element.find("<script>")) {
        std::cout << "[HTMLCPP] You have tried to manually add a script to the page. Use HTML::add_script_to_page(std::string javascript) to add a script beside the HTML page." << std::endl;
        exit(1);
    } else {
        Code.append(Element + "\n");
    }
}

void HTML::outputToFile() {
    if (Name == "") {
        std::cout << "[HTMLCPP] Name has not been set." << std::endl;
        exit(1);
    } else {
        std::ofstream htmlFile(Name + ".html");
        htmlFile << Code;
        htmlFile.close();
    }
}

void HTML::setName(std::string HTMLName) {
    Name = HTMLName;
}

void HTML::addCSS(std::string CSS[]) {
    if (Name == "") {
        std::cout << "[HTMLCPP] Name has not been set." << std::endl;
        exit(1);
    } else {
        std::ofstream cssfile(Name + ".css");
        Code.insert(0, "<link rel=\"stylesheet\" href=\"" + Name + ".css\">");
        for (int i = 0; i < CSS->length(); i++) {
            cssfile << CSS[i] << std::endl;
        }
        cssfile.close();
    }
}