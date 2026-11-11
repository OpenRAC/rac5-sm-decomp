/* LEVEL_08:0x1FB338 -- placement copy of LEVEL_04_1D63B8.c: forwards its pointer arguments to a helper with one of two table addresses, chosen by thresholds on the float argument. */

int func_1FB200(void *a0, void *a1, void *a2, void *a3, void *t0);

extern unsigned char D_00277AA8[];
extern unsigned char D_00277A98[];

int func_1FB338(void *a0, void *a1, void *a2, void *a3, float f)
{
    if (f <= 0.25f) {
        return func_1FB200(a0, a1, a2, a3, D_00277AA8);
    }
    if (f <= 0.5f) {
        return func_1FB200(a0, a1, a2, a3, D_00277A98);
    }
    return 0;
}
