# systemprograming 

repo for system programing training 


use
make <option>
options
    all   	  : To compile all program'
		fork1    : To compile fork1 program-./fork1 to run program'
		fork2    : To compile fork1 program-./fork2 to run program'
		fork3    : To compile fork1 program-./fork3 to run program'
		com1     : To compile com1 program-./com1 to run program'
		com2     : To compile com2 progrm-./com2 to run program'
		clean    : cleanup - remove all the binaries'

programs :
fork1- orphan: write a C prg to generate an orphan process
fork2- zombie: write a C prg to generate a zombie process
fork3 : fork 2 children; have the parent wait for both to die; ensure zombies are prevented using the signalling mechanism discussed for 2.6 Linux
com1,com2- sigcomm: have a process A send a 'message' to another cooperating process B via a real-time signal; the message is an integer value supplied to A as a parameter(s); verify that B receives it. This must continue until B receives the 'stopping' value -1.
