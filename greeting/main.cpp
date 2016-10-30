#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    
    cout << "input your name: ";
    string name;
    cin >> name;
    cout << endl;
    
    string greeting = "hello " + name + "!";
    
    size_t pad = 0;
    size_t rows = pad * 2 + 3;
    string::size_type columns = greeting.size() + pad * 2 + 2;
    
    for ( size_t row_index = 0; row_index < rows; ++row_index ) {
        string::size_type column_index = 0;
        while ( column_index != columns ) {
            if ( row_index == pad + 1 && column_index == pad + 1 ) {
                cout << greeting;
                column_index += greeting.size();
            }
            else {
                if ( row_index == 0 ||
                     row_index == rows - 1 ||
                     column_index == 0 ||
                     column_index == columns - 1 ) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
                ++column_index;
            }
        }
        cout << endl;
    }
    
    return 0;
}
