// 19. fcntl.h (POSIX)
// Use: Low-level file control (file descriptors, non-blocking I/O)

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
    if (fd != -1)
    {
        write(fd, "Hello", 5);
        close(fd);
    }
    return 0;
}
