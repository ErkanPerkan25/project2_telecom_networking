# CRC Endoder, Bit Flipping, and CRC Decoder
**project2_telecom_networking** <br>
Overview:
- writing a CRC encoder
- writing a bit permuter
- writing a CRC decoder

Author: **Eric Hansson**

- Platform:<br>
Arch Linux

- Details to compile program:<br>
There is a Makefile which creates executables called `transmit`, `flipBit`, and `reciver`<br>
To create the executable, you need to run this command:<br>
```
make
```

- Details to run program: 
To run the different programs separetly:
**Transmit**
```
./transmit
```
**FlipBit**
```
./flipBit <bit postion>
```
**Reciver**
```
./reciver
```

For running the programming with piping, here is the command:
```
./transmit | flipBit <bit postion> | ./reciver
```

- Any known bugs? <br>
Currently there are no bugs which is known of.

- Overview of solving project: <br>
Starting the project I looked at the CRC encoding scheme and tried to pick out the parts which is its mechanics.
I found XOR-ing and the long division of the transmited data, so I created functions for both of them. From there
I started to test both of them to make sure the work. After that I started to merge them to create the whole program.
I did the same thing for the `flitBit` and `reciver` programs.



