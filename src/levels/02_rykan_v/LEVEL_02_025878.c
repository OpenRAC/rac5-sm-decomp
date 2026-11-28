/* LEVEL_02:0x025878 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_0022F770;

extern int func_027F48(void *value);
extern void func_025B60(long long value, int state);
extern int func_027FD0(int index);

int func_025878(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_027F48((void *)index);
            func_025B60(index, D_0022F770);
        } else {
            func_027FD0(index);
        }
        return 1;
    }
    return 0;
}
