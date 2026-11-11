/* LEVEL_08:0x20EC50 -- placement copy of LEVEL_04_1E7080.c: resets a timer state when the input is non-negative and the state is armed. */

extern void func_088AA8(char *record);
extern int func_088940(unsigned char *a0, unsigned char *a1, float f0, float f1, float f2, float f3, int i2, int i3, int i4, int i5, int i6, int i7);
extern unsigned char *D_003E5490;

int func_20EC50(unsigned char *o, unsigned char *a1, float x)
{
    unsigned char *g;

    if (x < 0.0f) {
        return 0;
    }
    if (o[0x28] == 1) {
        *(float *)(o + 0x24) = 1.0f;
        o[0x28] = 2;
        if (*(char **)(o + 0x20) != 0) {
            func_088AA8(*(char **)(o + 0x20));
            *(char **)(o + 0x20) = 0;
        }
        g = D_003E5490;
        if (g != 0) {
            func_088940(a1, g, *(float *)(g + 0x14), *(float *)(g + 0x18), *(float *)(g + 0x1C), *(float *)(g + 0x20), 0, 0, 0, 0, 0, 1);
        }
        return 1;
    }
    return 0;
}
