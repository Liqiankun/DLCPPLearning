//
//  main.cpp
//  DLDataTypesString
//
//  Created by David on 2019/1/15.
//  Copyright © 2019 David. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string name = "David Lee";
    
    // char
    cout << name[0] << endl;
    
    // length
    cout << name.length() << endl;
    
    // find
    cout << name.find("Lee", 0) << endl;
    
    // substr
    cout << name.substr(6, 3) << endl;
    return 0;
}
