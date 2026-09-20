#include <sys/mem.h>
#include <sys/proc.h>
#include <9p/fcall.h>
#include <9p/fs.h>

void
kmain(void)
{
    fsinit();
    proccreate("init", NULL, 0);
    for(;;) {
        schedule();
    }
}