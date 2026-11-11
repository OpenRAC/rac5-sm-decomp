/* LEVEL_23:0x026118 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_026060(unsigned int i);
extern unsigned int func_026080(unsigned int i);

int func_026118(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_026060(i);
        if (func_026080(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
