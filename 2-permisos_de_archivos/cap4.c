#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    gid_t group = 1001; /* grupo de usuarios (GID) 1001 */
    chown("test.txt", -1, group); /* con -1 le decimos que deje el usuario que estaba */
    return 0;
}
