/* LEVEL_06:0x026998 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_0268E0(unsigned int i);
extern unsigned int func_026900(unsigned int i);

int func_026998(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_0268E0(i);
        if (func_026900(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
