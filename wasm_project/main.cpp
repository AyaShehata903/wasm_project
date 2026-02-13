#include <string>
#include <cstring>

extern "C" {

    char* encrypt(const char* input) {
        string str(input);

        for(char &c : str) {
            c = c + 3;
        }

        char* result = new char[str.length() + 1];
        strcpy(result, str.c_str());

        return result;
    }

    char* decrypt(const char* input) {
        string str(input);

        for(char &c : str) {
            c = c - 3;
        }

        char* result = new char[str.length() + 1];
        strcpy(result, str.c_str());

        return result;
    }

}