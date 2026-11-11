/* LEVEL_18:0x074B68 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001A569C;
extern float D_001A56A0;
extern float D_001A56A4;
extern float D_001A56A8;
extern int func_0273E8(int i);

void func_074B68(void)
{
    if (func_0273E8(3)) {
        D_001A569C += 0.01666666753590107f;
        if (D_001A569C > 1.0f)
            D_001A569C = 1.0f;
    } else if (D_001A569C > 0.0f) {
        D_001A569C -= 0.01666666753590107f;
        if (D_001A569C < 0.0f)
            D_001A569C = 0.0f;
    }
    if (func_0273E8(0)) {
        D_001A56A0 += 0.01666666753590107f;
        if (D_001A56A0 > 1.0f)
            D_001A56A0 = 1.0f;
    } else if (D_001A56A0 > 0.0f) {
        D_001A56A0 -= 0.01666666753590107f;
        if (D_001A56A0 < 0.0f)
            D_001A56A0 = 0.0f;
    }
    if (func_0273E8(1)) {
        D_001A56A4 += 0.01666666753590107f;
        if (D_001A56A4 > 1.0f)
            D_001A56A4 = 1.0f;
    } else if (D_001A56A4 > 0.0f) {
        D_001A56A4 -= 0.01666666753590107f;
        if (D_001A56A4 < 0.0f)
            D_001A56A4 = 0.0f;
    }
    if (func_0273E8(2)) {
        D_001A56A8 += 0.01666666753590107f;
        if (D_001A56A8 > 1.0f)
            D_001A56A8 = 1.0f;
    } else if (D_001A56A8 > 0.0f) {
        D_001A56A8 -= 0.01666666753590107f;
        if (D_001A56A8 < 0.0f)
            D_001A56A8 = 0.0f;
    }
}
