/* LEVEL_23:0x022FB8 -- placement copy of LEVEL_01_024F18.c: for an index below 25, either runs the apply helpers with the stored value or the release helper, and reports success; 0 for larger indices. */
extern int D_001ED970;

extern int func_0254B8(void *value);
extern void func_023248(long long value, int state);
extern void func_025540(int index);

int func_022FB8(int index, int apply)
{
    if ((unsigned int)index < 25) {
        if (apply != 0) {
            func_0254B8((void *)index);
            func_023248(index, D_001ED970);
        } else {
            func_025540(index);
        }
        return 1;
    }
    return 0;
}
