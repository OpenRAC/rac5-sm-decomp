/* LEVEL_04:0x086078 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_0020F6AC;
extern float D_0020F6B0;
extern float D_0020F6B4;
extern float D_0020F6B8;
extern int func_029E98(int i);

void func_086078(void)
{
    if (func_029E98(3)) {
        D_0020F6AC += 0.01666666753590107f;
        if (D_0020F6AC > 1.0f)
            D_0020F6AC = 1.0f;
    } else if (D_0020F6AC > 0.0f) {
        D_0020F6AC -= 0.01666666753590107f;
        if (D_0020F6AC < 0.0f)
            D_0020F6AC = 0.0f;
    }
    if (func_029E98(0)) {
        D_0020F6B0 += 0.01666666753590107f;
        if (D_0020F6B0 > 1.0f)
            D_0020F6B0 = 1.0f;
    } else if (D_0020F6B0 > 0.0f) {
        D_0020F6B0 -= 0.01666666753590107f;
        if (D_0020F6B0 < 0.0f)
            D_0020F6B0 = 0.0f;
    }
    if (func_029E98(1)) {
        D_0020F6B4 += 0.01666666753590107f;
        if (D_0020F6B4 > 1.0f)
            D_0020F6B4 = 1.0f;
    } else if (D_0020F6B4 > 0.0f) {
        D_0020F6B4 -= 0.01666666753590107f;
        if (D_0020F6B4 < 0.0f)
            D_0020F6B4 = 0.0f;
    }
    if (func_029E98(2)) {
        D_0020F6B8 += 0.01666666753590107f;
        if (D_0020F6B8 > 1.0f)
            D_0020F6B8 = 1.0f;
    } else if (D_0020F6B8 > 0.0f) {
        D_0020F6B8 -= 0.01666666753590107f;
        if (D_0020F6B8 < 0.0f)
            D_0020F6B8 = 0.0f;
    }
}
