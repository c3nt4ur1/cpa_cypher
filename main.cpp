//Copyright [2024] [Adriano Naime Bonin]

#include <iostream>
using namespace std;

#include "modules.h"

int main(int argc, const char * argv[]){ //argv[0]: filename; argv[1]: target string; argv[2]: key; argv[3]: encrypt|decrypt
    
    string key = argv[2];

    vector<char> c_key = key;

    if (key.size() >= 10 && key.size() <= 25000) {
        
        Text target(argv[1], argv[2], argv[3]);
        return target.;

    } else {
        return 1;
    }
    
}