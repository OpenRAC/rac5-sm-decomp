/* LEVEL_05:114A68 -- clamps the float behind a1 between the two bounds when
   the first routine answers 1. Both comparisons re-read the field. */
extern char D_00206620;

int func_000000(int a0, char *a1, float *a2);

int func_114A68(int a0, float *a1, float lo, float hi)
{
    if (func_000000(a0, &D_00206620, a1) != 1) {
        return 0;
    }
    if (*a1 < lo) {
        *a1 = lo;
    }
    if (*a1 > hi) {
        *a1 = hi;
    }
    return 1;
}
