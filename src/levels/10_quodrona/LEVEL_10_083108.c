/* LEVEL_10:0x083108 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001FF1EC;
extern float D_001FF1F0;
extern float D_001FF1F4;
extern float D_001FF1F8;
extern int func_02A1C8(int i);

void func_083108(void)
{
    if (func_02A1C8(3)) {
        D_001FF1EC += 0.01666666753590107f;
        if (D_001FF1EC > 1.0f)
            D_001FF1EC = 1.0f;
    } else if (D_001FF1EC > 0.0f) {
        D_001FF1EC -= 0.01666666753590107f;
        if (D_001FF1EC < 0.0f)
            D_001FF1EC = 0.0f;
    }
    if (func_02A1C8(0)) {
        D_001FF1F0 += 0.01666666753590107f;
        if (D_001FF1F0 > 1.0f)
            D_001FF1F0 = 1.0f;
    } else if (D_001FF1F0 > 0.0f) {
        D_001FF1F0 -= 0.01666666753590107f;
        if (D_001FF1F0 < 0.0f)
            D_001FF1F0 = 0.0f;
    }
    if (func_02A1C8(1)) {
        D_001FF1F4 += 0.01666666753590107f;
        if (D_001FF1F4 > 1.0f)
            D_001FF1F4 = 1.0f;
    } else if (D_001FF1F4 > 0.0f) {
        D_001FF1F4 -= 0.01666666753590107f;
        if (D_001FF1F4 < 0.0f)
            D_001FF1F4 = 0.0f;
    }
    if (func_02A1C8(2)) {
        D_001FF1F8 += 0.01666666753590107f;
        if (D_001FF1F8 > 1.0f)
            D_001FF1F8 = 1.0f;
    } else if (D_001FF1F8 > 0.0f) {
        D_001FF1F8 -= 0.01666666753590107f;
        if (D_001FF1F8 < 0.0f)
            D_001FF1F8 = 0.0f;
    }
}
