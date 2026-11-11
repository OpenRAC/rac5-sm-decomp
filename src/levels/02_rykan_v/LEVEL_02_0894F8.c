/* LEVEL_02:0x0894F8 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_0020B1AC;
extern float D_0020B1B0;
extern float D_0020B1B4;
extern float D_0020B1B8;
extern int func_02ABB8(int i);

void func_0894F8(void)
{
    if (func_02ABB8(3)) {
        D_0020B1AC += 0.01666666753590107f;
        if (D_0020B1AC > 1.0f)
            D_0020B1AC = 1.0f;
    } else if (D_0020B1AC > 0.0f) {
        D_0020B1AC -= 0.01666666753590107f;
        if (D_0020B1AC < 0.0f)
            D_0020B1AC = 0.0f;
    }
    if (func_02ABB8(0)) {
        D_0020B1B0 += 0.01666666753590107f;
        if (D_0020B1B0 > 1.0f)
            D_0020B1B0 = 1.0f;
    } else if (D_0020B1B0 > 0.0f) {
        D_0020B1B0 -= 0.01666666753590107f;
        if (D_0020B1B0 < 0.0f)
            D_0020B1B0 = 0.0f;
    }
    if (func_02ABB8(1)) {
        D_0020B1B4 += 0.01666666753590107f;
        if (D_0020B1B4 > 1.0f)
            D_0020B1B4 = 1.0f;
    } else if (D_0020B1B4 > 0.0f) {
        D_0020B1B4 -= 0.01666666753590107f;
        if (D_0020B1B4 < 0.0f)
            D_0020B1B4 = 0.0f;
    }
    if (func_02ABB8(2)) {
        D_0020B1B8 += 0.01666666753590107f;
        if (D_0020B1B8 > 1.0f)
            D_0020B1B8 = 1.0f;
    } else if (D_0020B1B8 > 0.0f) {
        D_0020B1B8 -= 0.01666666753590107f;
        if (D_0020B1B8 < 0.0f)
            D_0020B1B8 = 0.0f;
    }
}
