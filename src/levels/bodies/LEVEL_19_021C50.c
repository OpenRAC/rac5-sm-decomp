/* LEVEL_19:0x021C50 -- placement copy of LEVEL_16_022010.c: returns whether a field of a looked-up record is nonzero, after two checks. */
struct R022010 {
    char pad0[0x38];
    int f38;
};

extern int func_021B90(void *a, int b);
extern struct R022010 *func_021D50(void *a, int b);

int func_021C50(void *a)
{
    if (func_021B90(a, -1) == 0) {
        return 0;
    }
    if (a == (void *)12) {
        return 0;
    }
    if (func_021D50(a, -1) == 0) {
        return 0;
    }
    return func_021D50(a, -1)->f38 != 0;
}
