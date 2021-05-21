// Strings
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    string str1(8, 'o');

    getline(cin, str);
    str.append(str1);
    string a = "b";

    cout << str <<' '<<str1<<'\n';
    cout << str+str1 <<'\n';
    cout << a.compare("a") << '\n';

    // let string is s.
    // s.empty() -> check empty
    // s.clear() -> clears
    // s.erase(2,3) -> 3 characters from 2
    // s.find("lol") -> starting index or -1
    // s.length() -> returns length 
    // s.insert(5,"lol") -> insert lol in 5th index
    // s.substr(3,4) -> 4 chars from 3 index
    // stoi("54") -> string to int
    // to_string(54) -> int to string
    // toupper() and tolower() -> char to upper/lower case
    // push_back and pop_back



    return 0;
}