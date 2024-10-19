//Copyright [2024] [Adriano Naime Bonin]

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Text{
private:
    vector<char> input_string;
    vector<char> output_string;
    int length;

protected:
    vector<char> encrypt(vector<char> key);
    vector<char> decrypt(vector<char> key);
public:
    Text(vector<char> input, vector<char> key, char op);
    
    vector<char> get_output(){return this->output_string}
};