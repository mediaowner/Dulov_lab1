#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Pipe {
    public:
        Pipe() : pipe_name(""), pipe_length(0.0f), pipe_diameter(0), pipe_option(false) {}
    
        Pipe(const string& name, float length, int diameter, bool option)
            : pipe_name(name), pipe_length(length), pipe_diameter(diameter), pipe_option(option) {}
    
        string getName() const { return pipe_name; }
        float getLength() const { return pipe_length; }
        int getDiameter() const { return pipe_diameter; }
        bool getOption() const { return pipe_option; }
    
        void setName(const string& name) { pipe_name = name; }
        void setLength(float length) { pipe_length = length; }
        void setDiameter(int diameter) { pipe_diameter = diameter; }
        void setOption(bool option) { pipe_option = option; }
    
        void printInfo() const {
            cout << "Pipe Name: " << pipe_name;
            cout << "Pipe Length: " << pipe_length;
            cout << "Pipe Diameter: " << pipe_diameter;
            cout << "Pipe Option: " << (pipe_option ? "true" : "false");
        }
    
private:
    string pipe_name;
    float pipe_length;
    int pipe_diameter;
    bool pipe_option;
};
    
void Menu() {
    int option;

    do {
        cout << "Menu:\n1 - Add pipe\n2 - Add CS\n3 - All objects\n4 - Edit pipe\n5 - Edit CS\n6 - Save\n7 - Load data\n0 - Exit\n";
        cin >> option;
        switch (option)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            cout << "Error: Incorrect input";
        };
    } while (option != 0);
};



int main(){
    string pipe_name;
    float pipe_length;
    int pipe_diameter;
    bool pipe_option;
    Menu();
}