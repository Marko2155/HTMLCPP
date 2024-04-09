#include <iostream>
#include "html.h"

int main() {
    HTML htmlObject;
    htmlObject.clearCode();
    htmlObject.setName("example");
    htmlObject.addElement("<h1 id=\"hi\">hi</h1>");
    std::string js[] = {"window.setTimeout(() => {", "var hi = document.getElementById('hi')", "hi.innerText = 'hello c++!'", "}, 1);"};
    std::string css[] = {"h1 {", "color: blue;", "}"};
    htmlObject.addJS(js);
    htmlObject.addCSS(css);
    htmlObject.outputToFile();
    std::system("open example.html"); // change 'open' depending on your system, mine is macOS, so I use open
    return 0;
}
