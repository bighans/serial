#include <asm/termbits.h>
#include <sys/ioctl.h>

#include "serial/impl/setBaudRate.h"


/* functions */
int setBaudRate(int fd, int iSpeed)
{
    struct termios2 tio;

    ioctl(fd, TCGETS2, &tio);
    tio.c_cflag &= ~CBAUD;
    tio.c_cflag |= BOTHER;
    tio.c_ispeed = iSpeed;
    tio.c_ospeed = iSpeed;
    return ioctl(fd, TCSETS2, &tio);
}

