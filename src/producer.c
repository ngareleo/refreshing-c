#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define FileName "data.dat"
#define DataString "Now is the winter of our discontent\nMade glorious summer by this sun of York\n"

int main()
{
    struct flock lock;
    lock.l_type = F_WRLCK; // Read, Write lock
}