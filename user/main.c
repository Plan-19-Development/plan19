#include <u.h>
#include <libc.h>
#include <9p/fcall.h>

void
main(int argc, char **argv)
{
    print("Plan 19 OS - User space initialized\n");
    if(argc > 1)
        print("Argument: %s\n", argv[1]);
    else
        print("No arguments\n");
    for(;;) {
        sleep(1000000);
    }
}