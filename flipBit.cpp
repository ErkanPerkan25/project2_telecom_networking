/************************************************************
* Author: Eric Hansson
* Date: 03/08/2025
* File: flipBit.cpp
* Purpose: Flip a bit in the specific requested position of 
* the frame
************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    // If use of arguments are not correct
    if(argc != 2){
        cerr << "Usage: ./transmit <bit number>" << endl;
        return 1;
    }

    // Gets index from commmad args
    string bitNum = argv[1];
    // Turns the index from strig to int
    int bitPos = stoi(bitNum)-1;

    string frame, generator;

    // Reads in the frame and generator
    cin >> frame;
    cin >> generator;

    // If 0, then do nothing
    if (bitPos < 0) {

    }
    // We have a postion, if bit is 1 flip to 0
    else if (frame[bitPos] == '1') {
        frame[bitPos]  = '0';
    }
    // We have a postion, if bit is 0 flip to 1
    else if(frame[bitPos] == '0'){
        frame[bitPos] = '1';
    }

    // Print out frame and generator
    cout << frame << endl << generator << endl;;

    return 0;
}
