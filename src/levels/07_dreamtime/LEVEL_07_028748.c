/* LEVEL_07:0x028748 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_028690(unsigned int i);
extern unsigned int func_0286B0(unsigned int i);

int func_028748(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_028690(i);
        if (func_0286B0(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
