/* LEVEL_16:0x0F9138 -- clamps the sample into the [low, high] window once the
   lookup accepts the request. */
extern char D_001CC5E0[];
extern int func_000000(void *, void *, float *);

int func_0F9138(void *a0, float *a1, float f12, float f13)
{
    if (func_000000(a0, D_001CC5E0, a1) != 1) {
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
