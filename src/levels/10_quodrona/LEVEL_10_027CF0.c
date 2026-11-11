/* LEVEL_10:0x027CF0 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_027C38(unsigned int i);
extern unsigned int func_027C58(unsigned int i);

int func_027CF0(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_027C38(i);
        if (func_027C58(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
