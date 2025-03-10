/************************************************************
* Author: Eric Hansson
* Date: 03/08/2025
* File: reciver.cpp
* Purpose: To decode the transmitted CRC encoding
************************************************************/

#include <iostream>

using namespace std;

// For XOR-ing the bits
string XOR(string bits1, string bits2){
    string res = "";

    for(int i=1; i < bits1.size(); i++) {
        if(bits1[i] == bits2[i]){
            res.push_back('0');
        }
        else {
            res.push_back('1');
        }
    }

    return res;
}

// See if there is a remainder from the calculations
bool longDivison(string frame, string generator){

    // Starting bits
    string bits = frame.substr(0,generator.size());

    // Bits of zeros when needed
    string zeroGen(generator.size(), '0');


    // Goes throught the transmitted data
    for(int i=bits.size(); i < frame.size(); i++){
        if(bits[0] == '0')
            bits = XOR(bits, zeroGen);
        else
            bits = XOR(bits, generator);

        bits.push_back(frame[i]);
    }

    bool status = true;

    // check if it there is a remainder or not
    for(int i=0; i < bits.size(); i++){
        if(bits[i] == '1'){
            status = false;
            break;
        }
    }

    // returns true if no remainder and false if there is one
    return status;
}



int main(int argc, char *argv[]){
    string frame, generator;
    
    // Reades in the transmitted and generator
    cin >> frame;
    cin >> generator;

    // The result of decodig the transmitted data
    bool res = longDivison(frame, generator);

        // Message to indicate if the transmitted data is good or not
    if(res == true)
        cout << "OK" << endl;
    else
        cout << "ERROR" << endl;


    return 0;
}
