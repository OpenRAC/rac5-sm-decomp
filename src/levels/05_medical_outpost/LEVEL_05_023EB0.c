/* LEVEL_05:0x023EB0 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_002096F0;

extern int func_0264A0(void *value);
extern void func_024198(long long value, int state);
extern int func_026528(int index);

int func_023EB0(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_0264A0((void *)index);
            func_024198(index, D_002096F0);
        } else {
            func_026528(index);
        }
        return 1;
    }
    return 0;
}
