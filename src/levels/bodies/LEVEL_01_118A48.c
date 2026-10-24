/* LEVEL_01:0x118A48 -- clamps the sample into the [low, high] window once the
   lookup accepts the request. */
extern char D_00217720[];
extern int func_000000(void *, void *, float *);

int func_118A48(void *a0, float *a1, float f12, float f13)
{
    if (func_000000(a0, D_00217720, a1) != 1) {
        return 0;
    }
    if (*a1 < f12) {
        *a1 = f12;
    }
    if (f13 < *a1) {
        *a1 = f13;
    }
    return 1;
}
