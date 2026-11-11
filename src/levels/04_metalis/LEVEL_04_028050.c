/* LEVEL_04:0x028050 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_027F98(unsigned int i);
extern unsigned int func_027FB8(unsigned int i);

int func_028050(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_027F98(i);
        if (func_027FB8(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
