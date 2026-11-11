/* LEVEL_17:0x021990 -- placement copy of LEVEL_16_022010.c: returns whether a field of a looked-up record is nonzero, after two checks. */
struct R022010 {
    char pad0[0x38];
    int f38;
};

extern int func_0218D0(void *a, int b);
extern struct R022010 *func_021A90(void *a, int b);

int func_021990(void *a)
{
    if (func_0218D0(a, -1) == 0) {
        return 0;
    }
    if (a == (void *)12) {
        return 0;
    }
    if (func_021A90(a, -1) == 0) {
        return 0;
    }
    return func_021A90(a, -1)->f38 != 0;
}
