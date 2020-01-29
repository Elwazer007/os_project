#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "pstat.h"


int main(int argc, char *argv[])
{
    printf(1, "Process scheduling statistics:\n");
    printf(1, "slot\tPID\tState\n");
    struct pstat st;
    psaux(&st);
    int i;
    for (i = 0; i < NPROC; i++)
    {
        if (st.inuse[i])
        {
            printf(1, "%d\t%d\t%d\n", i, st.pid[i], st.killed[i]);
        }
    }

    exit();
}