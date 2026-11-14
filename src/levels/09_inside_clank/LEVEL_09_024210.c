/* LEVEL_09:0x024210 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_002043F0;

extern int func_026768(void *value);
extern void func_0244F8(long long value, int state);
extern void func_0267F0(int index);

int func_024210(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_026768((void *)index);
            func_0244F8(index, D_002043F0);
        } else {
            func_0267F0(index);
        }
        return 1;
    }
    return 0;
}
