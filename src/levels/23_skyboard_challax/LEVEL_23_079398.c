/* LEVEL_23:0x079398 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001C95EC;
extern float D_001C95F0;
extern float D_001C95F4;
extern float D_001C95F8;
extern int func_027F60(int i);

void func_079398(void)
{
    if (func_027F60(3)) {
        D_001C95EC += 0.01666666753590107f;
        if (D_001C95EC > 1.0f)
            D_001C95EC = 1.0f;
    } else if (D_001C95EC > 0.0f) {
        D_001C95EC -= 0.01666666753590107f;
        if (D_001C95EC < 0.0f)
            D_001C95EC = 0.0f;
    }
    if (func_027F60(0)) {
        D_001C95F0 += 0.01666666753590107f;
        if (D_001C95F0 > 1.0f)
            D_001C95F0 = 1.0f;
    } else if (D_001C95F0 > 0.0f) {
        D_001C95F0 -= 0.01666666753590107f;
        if (D_001C95F0 < 0.0f)
            D_001C95F0 = 0.0f;
    }
    if (func_027F60(1)) {
        D_001C95F4 += 0.01666666753590107f;
        if (D_001C95F4 > 1.0f)
            D_001C95F4 = 1.0f;
    } else if (D_001C95F4 > 0.0f) {
        D_001C95F4 -= 0.01666666753590107f;
        if (D_001C95F4 < 0.0f)
            D_001C95F4 = 0.0f;
    }
    if (func_027F60(2)) {
        D_001C95F8 += 0.01666666753590107f;
        if (D_001C95F8 > 1.0f)
            D_001C95F8 = 1.0f;
    } else if (D_001C95F8 > 0.0f) {
        D_001C95F8 -= 0.01666666753590107f;
        if (D_001C95F8 < 0.0f)
            D_001C95F8 = 0.0f;
    }
}
