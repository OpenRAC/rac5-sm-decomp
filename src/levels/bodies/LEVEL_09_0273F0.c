/* LEVEL_09:0x0273F0 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_027338(unsigned int i);
extern unsigned int func_027358(unsigned int i);

int func_0273F0(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_027338(i);
        if (func_027358(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
