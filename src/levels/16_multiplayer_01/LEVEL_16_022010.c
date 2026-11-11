/* LEVEL_16:0x022010 -- returns whether a field of a looked-up record is nonzero, after two checks. */
struct R022010 {
    char pad0[0x38];
    int f38;
};

extern int func_021F50(void *a, int b);
extern struct R022010 *func_022110(void *a, int b);

int func_022010(void *a)
{
    if (func_021F50(a, -1) == 0) {
        return 0;
    }
    if (a == (void *)12) {
        return 0;
    }
    if (func_022110(a, -1) == 0) {
        return 0;
    }
    return func_022110(a, -1)->f38 != 0;
}
