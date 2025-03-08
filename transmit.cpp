/************************************************************
* Author: Eric Hansson
* Date: 03/08/2025
* File: transmit.cpp
* Purpose:  
************************************************************/

#include <iostream>
#include <string>

using namespace std;

// Fucntion for XOR-ing bits
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

// Function for creating the encoding of the data
string longDivison(string frame, string generator){

    // Takes the first bits of the frame
    string bits = frame.substr(0,generator.size());

    // 
    string zeroGen(generator.size(), '0');


    // Goes through and calculate the remainder 
    for(int i=bits.size(); i <= frame.size(); i++){

        if(bits[0] == '0')
            bits = XOR(bits, zeroGen);
        else
            bits = XOR(bits, generator);

        bits.push_back(frame[i]);
    }

   
    // Add the remainder to the frame of data
    frame.replace(frame.size()-bits.size()+1, frame.size(), bits);

    return frame;
}



int main(int argc, char *argv[]){
    string frame, generator;
   
    // Reads in the frame of data and generator
    cin >> frame;
    cin >> generator;

    // Adds generator.size - 1 of zeros to the frame
    for(int i=0; i < generator.size()-1; i++)
        frame.push_back('0');

    // Prints out the result of the encoding and the generator used
    cout << longDivison(frame, generator) << endl;
    cout << generator << endl;

    return 0;
}
