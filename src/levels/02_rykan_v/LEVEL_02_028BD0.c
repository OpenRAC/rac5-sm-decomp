/* LEVEL_02:0x028BD0 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_028B18(unsigned int i);
extern unsigned int func_028B38(unsigned int i);

int func_028BD0(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_028B18(i);
        if (func_028B38(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
