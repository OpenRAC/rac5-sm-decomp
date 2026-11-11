/* LEVEL_05:114A68 -- clamps the float behind a1 between the two bounds when
   the first routine answers 1. Both comparisons re-read the field. */
extern char D_00206620;

extern int sscanf(const char *, const char *, ...);

int func_114A68(const char *a0, float *a1, float lo, float hi)
{
    if (sscanf(a0, &D_00206620, a1) != 1) {
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
