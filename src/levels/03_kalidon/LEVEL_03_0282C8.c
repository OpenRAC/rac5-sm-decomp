/* LEVEL_03:0x0282C8 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_028210(unsigned int i);
extern unsigned int func_028230(unsigned int i);

int func_0282C8(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_028210(i);
        if (func_028230(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
