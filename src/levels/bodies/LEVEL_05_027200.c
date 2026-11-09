/* LEVEL_05:0x027200 -- placement copy of LEVEL_01_0283E8.c: for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_027148(unsigned int i);
extern unsigned int func_027168(unsigned int i);

int func_027200(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_027148(i);
        if (func_027168(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
