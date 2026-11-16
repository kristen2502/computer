#include <stdio.h>
#include <sys/socket.h>

int main(int argc, char *argv[])
{
    int socket_desc;

    // Create TCP socket (IPv4, TCP stream)
    socket_desc = socket(AF_INET, SOCK_STREAM, 0);

    if (socket_desc == -1)
    {
        printf("Could not create socket\n");
        return 1;
    }

    printf("socket created successfully\n");

    return 0;
}
