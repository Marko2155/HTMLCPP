#include <iostream>
#include "html.h"

int main() {
    HTML htmlObject;
    std::string js[] = {"var hi = document.getElementById('hi')", "hi.innerText = 'hello c++!'"};
    std::string css[] = {"h1 {", "color: blue;", "}"};
    htmlObject.addElement("<h1 id=\"hi\">hi</h1>");
    htmlObject.addJS(js);
    htmlObject.addCSS(css);
    htmlObject.outputToFile("example.html");
    std::system("open example.html"); // change 'open' depending on your system, mine is MacOS, so i use open
    return 0;
}
