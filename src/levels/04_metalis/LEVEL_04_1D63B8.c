/* LEVEL_04:0x1D63B8 -- forwards its pointer arguments to a helper with one of two table addresses, chosen by thresholds on the float argument. */

int func_1D6280(void *a0, void *a1, void *a2, void *a3, void *t0);

extern unsigned char D_00243838[];
extern unsigned char D_00243828[];

int func_1D63B8(void *a0, void *a1, void *a2, void *a3, float f)
{
    if (f <= 0.25f) {
        return func_1D6280(a0, a1, a2, a3, D_00243838);
    }
    if (f <= 0.5f) {
        return func_1D6280(a0, a1, a2, a3, D_00243828);
    }
    return 0;
}
