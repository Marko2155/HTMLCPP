//HTMLCPP code
#include <string>
#include <fstream>
#include <iostream>

class HTML {
public:
    void addElement(std::string Element);
    void outputToFile(std::string FileName);
    void addJS(std::string JS[]);
    std::string showHTMLCode();
protected:
    std::string Code;
};

void HTML::addJS(std::string JS[]) {
    Code.append("<script>\n");
    for (int i = 0; i < JS->length(); i++) {
        Code.append(JS[i] + "\n");
    }
    Code.append("</script>\n");
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


// Main code

#include <iostream>

int main() {
    HTML htmlObject;
    std::string js[] = {"var hi = document.getElementById('hi')", "hi.innerText = 'hello c++!'"};
    htmlObject.addElement("<h1 id=\"hi\">hi</h1>");
    htmlObject.addJS(js);
    htmlObject.outputToFile("example.html");
    std::system("open example.html"); // change 'open' depending on your system, mine is MacOS, so i use open
    return 0;
}
