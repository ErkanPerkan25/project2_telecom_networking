/************************************************************
* Author: Eric Hansson
* Date:
* File:
* Purpose:
************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    if(argc != 2){
        cerr << "Usage: ./transmit <bit number>" << endl;
        return 1;
    }

    // Gets index from commmad args
    string bitNum = argv[1];
    int bitPos = stoi(bitNum)-1;

    string frame, generator;

    cin >> frame;
    cin >> generator;

    if (bitPos < 0) {

    }
    else if (frame[bitPos] == '1') {
        frame[bitPos]  = '0';
    }
    else if(frame[bitPos] == '0'){
        frame[bitPos] = '1';
    }

    cout << frame << endl << generator << endl;;

    return 0;
}
