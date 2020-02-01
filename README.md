# cs3753_PA1

Contact Info:
Chace Trevino
chtr8005@colorado.edu

cs3753_add.c

-This file is the source code for the system call that completes the addition of two integers and copies result to user space.

Path: /home/kernel/linux-hwe-4.15.0/arch/kernel/cs3753_add.c



Makefile

-Contains the objects that should be created, whether it is a built-in command or module

Path: /home/kernel/linux-hwe-4.15.0/arch/kernel/Makefile



syscall_64.tbl

-This file is a jump table for all of the system calls which tells the OS where to go to execute the particular code

Path: /home/kernel/linux-hwe-4.15.0/arch/x86/entry/syscalls/syscall_64.tbl



syscalls.h

-Contains the prototypes for all of the OS system calls

Path: /home/kernel/linux-hwe-4.15.0/include/linux/syscalls.h



syslog

-Syslog contains all the messeges coming from programs, events, network. This is often where you can find errors and make sure things are 
running correctly. 

Path: /var/log/syslog



addTest.c

-Source code that tests to make sure the new system call functions correctly. Prints sum produced by system call in user space. 

Path: Desktop/addTest.c




To compile and run program:

cd Desktop

#OPTIONAL if you want to input your own custom numbers

nano addTest.c

#change first two int parameters to whatever values you want to add together

gcc addTest.c -o addTest

./addTest



