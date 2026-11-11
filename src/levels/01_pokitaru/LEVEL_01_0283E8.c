/* LEVEL_01:0x0283E8 -- for indices 1 to 10, returns 0 if the second helper result is below the first, else 1. */

extern unsigned int func_028330(unsigned int i);
extern unsigned int func_028350(unsigned int i);

int func_0283E8(void)
{
    unsigned int i;
    unsigned int lo;

    i = 1;
    do {
        lo = func_028330(i);
        if (func_028350(i) < lo) {
            return 0;
        }
        i++;
    } while (i < 11);
    return 1;
}
