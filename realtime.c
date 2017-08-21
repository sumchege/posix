#include <time.h>
#include <stdio.h>

int
main(int argc, char* argv[]) {
    struct timespec ts;
    struct timespec delay = { .tv_sec = 0, .tv_nsec = 1000 };
    int res = -1;
    clockid_t clk = CLOCK_REALTIME;

    res = clock_getres(clk, &ts);
    if (0 == res) printf("%ld %ld\n", ts.tv_sec, ts.tv_nsec);

    res = clock_gettime(clk, &ts);
    if (0 == res) printf("%ld %ld\n", ts.tv_sec, ts.tv_nsec);

    clock_nanosleep(clk, 0, &delay, NULL);

    res = clock_gettime(clk, &ts);
    if (0 == res) printf("%ld %ld\n", ts.tv_sec, ts.tv_nsec);

    return 0;
}
