/*

	20240929	HEK3	Created

	Portable fucntion to set the custom speed on a termios using termios2

	https://stackoverflow.com/questions/37710525/including-termios-h-and-asm-termios-h-in-the-same-project

*/

#pragma once

int setBaudRate(int fd, int iSpeed);
