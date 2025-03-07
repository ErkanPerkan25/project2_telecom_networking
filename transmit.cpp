/************************************************************
* Author: Eric Hansson
* Date:
* File:
* Purpose:
************************************************************/

#include <functional>
#include <iostream>
#include <string>

using namespace std;

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

string longDivison(string frame, string generator){

    string bits = frame.substr(0,generator.size());

    string zeroGen(generator.size(), '0');


    for(int i=bits.size(); i <= frame.size(); i++){

        if(bits[0] == '0')
            bits = XOR(bits, zeroGen);
        else
            bits = XOR(bits, generator);

        bits.push_back(frame[i]);
    }

    
    frame.replace(frame.size()-bits.size()+1, frame.size(), bits);

    return frame;
}



int main(int argc, char *argv[]){
    string frame, generator;
    
    cin >> frame;
    cin >> generator;

    for(int i=0; i < generator.size()-1; i++)
        frame.push_back('0');

    cout << longDivison(frame, generator) << endl;
    cout << generator << endl;

    return 0;
}
