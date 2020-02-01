#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int chpr(int pid, int priority);

int main(int argc, char *argv[])
{

    int tickets, pid;
    if (argc < 3)
    {
        printf(2, "Usage: nice pid priority\n");
        exit();
    }
    pid = atoi(argv[1]);
    tickets = atoi(argv[2]);
    printf(2, "%d --- %d\n",pid,tickets);

    if (tickets < 0)
    {
        printf(2, "Invalid tickets!\n");
        exit();
    }
    chpr(pid, tickets);

    exit();
}