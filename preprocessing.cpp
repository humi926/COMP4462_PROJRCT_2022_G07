#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    string output = "https://roads.googleapis.com/v1/snapToRoads?interpolate=true&path=";
    getline(cin, input);
    output.append(input);
    while (true) {
        getline(cin, input);
        if (input == "e") {
            break;
        }
        if (input != "") {
            output.append("|");
            output.append(input);
        }
    }
    cout << output << "&key=AIzaSyDZLVHq9L4LlR7adX7oCwBemdP0xPlRdHk";

    return 0;
}