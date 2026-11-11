/* LEVEL_06:0x07BC00 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001E50EC;
extern float D_001E50F0;
extern float D_001E50F4;
extern float D_001E50F8;
extern int func_0287D8(int i);

void func_07BC00(void)
{
    if (func_0287D8(3)) {
        D_001E50EC += 0.01666666753590107f;
        if (D_001E50EC > 1.0f)
            D_001E50EC = 1.0f;
    } else if (D_001E50EC > 0.0f) {
        D_001E50EC -= 0.01666666753590107f;
        if (D_001E50EC < 0.0f)
            D_001E50EC = 0.0f;
    }
    if (func_0287D8(0)) {
        D_001E50F0 += 0.01666666753590107f;
        if (D_001E50F0 > 1.0f)
            D_001E50F0 = 1.0f;
    } else if (D_001E50F0 > 0.0f) {
        D_001E50F0 -= 0.01666666753590107f;
        if (D_001E50F0 < 0.0f)
            D_001E50F0 = 0.0f;
    }
    if (func_0287D8(1)) {
        D_001E50F4 += 0.01666666753590107f;
        if (D_001E50F4 > 1.0f)
            D_001E50F4 = 1.0f;
    } else if (D_001E50F4 > 0.0f) {
        D_001E50F4 -= 0.01666666753590107f;
        if (D_001E50F4 < 0.0f)
            D_001E50F4 = 0.0f;
    }
    if (func_0287D8(2)) {
        D_001E50F8 += 0.01666666753590107f;
        if (D_001E50F8 > 1.0f)
            D_001E50F8 = 1.0f;
    } else if (D_001E50F8 > 0.0f) {
        D_001E50F8 -= 0.01666666753590107f;
        if (D_001E50F8 < 0.0f)
            D_001E50F8 = 0.0f;
    }
}
