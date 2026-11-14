/* LEVEL_03:0x024DE8 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_002336F0;

extern int func_027640(void *value);
extern void func_0250D0(long long value, int state);
extern void func_0276C8(int index);

int func_024DE8(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_027640((void *)index);
            func_0250D0(index, D_002336F0);
        } else {
            func_0276C8(index);
        }
        return 1;
    }
    return 0;
}
