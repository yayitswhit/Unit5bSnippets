//
// This program is a compilation of Unit 5b Code Snippets
//  main.cpp
//  Unit5bSnippets
//
//  Created by Gilbert W. Sanborn Jr on 3/15/23.
//

#include <iostream>

using namespace std;
int main() {
    //using the for loop
    cout << "Print out numbers one through 10, inclusive." << endl;
    for(int i = 1; i < 11; i++) {
        cout << i << endl;
    }
    
    //nested for loop
    for(int i = 1; i < 11; i++) {
        cout << "Outer Loop Counter: " << i << endl;
        for(int j = 1; j < 11; j++) {
            cout << "\tInner Loop Counter: " << j << endl;
        }
        
    }
    return 0;
}
