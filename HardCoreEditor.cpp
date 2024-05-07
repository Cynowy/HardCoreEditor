#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string content;
    string line;

    cout << "\033c";

    cout << "HardCoreEditor v0.1\n";

    while (true) {
        cout << "--> ";
        getline(cin, line);

        if (line.substr(0, 3) == ":sq") {
            const char* contnt = content.c_str();
            const char* filename = line.substr(4).c_str();

            FILE* file = fopen(filename, "w");
            fprintf(file, contnt);
            fclose(file);
            
            return 0;
        } else {
            content += line+"\n";
        }
    }
}