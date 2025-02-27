/************************************************************
* Author: Eric Hansson
* Date:
* File:
* Purpose:
************************************************************/

#include <iostream>
#include <string>

using namespace std;

string longDivison(string frame, string generator){

    string bits = frame.substr(0,generator.size());

    string extra;

    if(bits[0] == '1' && generator[0] == '1')
        extra = '1';

    string newBits;
    for (int i=0; i < bits.size()-1; i++) {
        if (bits[i+1] == '0' && generator[i+1] == '1') {
            newBits.push_back('1');
        } 
        else if (bits[i+1] == '1' && generator[i+1] == '0') {
            newBits.push_back('1');
        } 
        else if (bits[i+1] == '1' && generator[i+1] == '1') {
            newBits.push_back('0');
        } 
        else if (bits[i+1] == '0' && generator[i+1] == '0') {
            newBits.push_back('0');
        } 
    }

    

    return newBits;
}

int main(int argc, char *argv[]){
    string frame, generator;
    
    cin >> frame;
    cin >> generator;

    for(int i=0; i < generator.size()-1; i++)
        frame.push_back('0');

    
    


    return 0;
}
