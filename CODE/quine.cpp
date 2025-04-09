#include <iostream>
using namespace std;

int main() {
    const char* code = "#include <iostream>\nusing namespace std;\n\nint main() {\n    const char* code = %c%s%c;\n    printf(code, 34, code, 34);\n    return 0;\n}";
    cout<<"OUTPUT";
    printf(code, 34, code, 34);
    return 0;
}
