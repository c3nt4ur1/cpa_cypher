//Copyright [2024] [Adriano Naime Bonin]

#include "modules.h"

Text::Text(vector<char> input, vector<char> key, char op){
    this->input_string = input;
    this->length;

    if(op=='e'){
        this->output_string=this->input_string.encrypt(key);
    }else if(op=='d'){
        this->output_string=this->input_string.decrypt(key);
    }else{
        return 2;
    }
}

vector<char> Text::encrypt(vector<char> key){

}

vector<char> Text::decrypt(vector<char> key){
    
}