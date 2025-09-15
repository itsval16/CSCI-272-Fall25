#include <iostream>
#include <string>
#include <cctype> // to lower and to upper


using namespace std;

bool caseInsensititveCompare( const string& strl, const string& str2){
    it(str1.length() != str2.length()){
        return false;
    }
    for (size_t i = 0; i < strl.length(); i++){
        if(tolower(str1[i])) != tolower(str2[i])){
            return false;
        }
    }
    return true;
    
}

int main(){
    
    string str1 = "Hello";
    string str2 = "Hello";
    
    if caseInsensititveCompare(Str1, str2)){
        cout << "Strings are case-insenstive equal" ,, endl;
    }
    }

//    string firstname;
//    string lastname;
//    
//    
//    cout << "First Name: " << endl;
//    cin >> firstname;
//    
//    cout << "Last Name: " << endl;
//    cin >> lastname;
//    
//    string fullname = firstname + " " + lastname; //
//    
//    cout << "Full Name: " << fullname << endl;
//    
//    fullname += " Jr.";
//    cout << " Full Name with suffix: " << fullname << endl;
//    
//    fullname = "Dr. " + fullname;
    
//    fullname.insert(0, "Dr. ");
//    cout << "Fullname with Prefix"
    
//    string message = "Hello World";
//    int messagelength = message.length();
//    int messagesize = message.size();
//    
//    cout << "length: " << messagelength << endl << "Size: " << messagesize << endl;
//    
//    char firstChar = message[0];
//    char lastChar = message [message.length()-1];
//    
//    cout << "First Char: " <<firstChar << endl << "Last Char: " << lastChar << endl;
    
//    string str1 = "apple";
//    string str2 = " Banana";
//    
//    if (str1 == str2){
//        cout << "Both Strings are equal!" << endl;
//    } else if (str1 > str2){
//        cout << " Strl is lexicographically greater than str2." << endl;
//    } else {
//        cout << "Strl is lexicographically less than str2." << endl;
//    }
//    
    
    
    return 0;
}

// cntl + / = for making a line of code into a comment
