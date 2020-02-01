#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int settickets(int n);

int main(int argc, char *argv[])
{

    int n;
    if (argc < 2)
    {
        printf(2, "Usage: n\n");
        exit();
    }

    n = atoi(argv[1]);

    if (n < 0)
    {
        printf(2, "Invalid n !\n");
        exit();
    }
    settickets(n);

    exit();
}