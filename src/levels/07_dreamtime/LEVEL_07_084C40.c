/* LEVEL_07:0x084C40 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_0020A4EC;
extern float D_0020A4F0;
extern float D_0020A4F4;
extern float D_0020A4F8;
extern int func_02A730(int i);

void func_084C40(void)
{
    if (func_02A730(3)) {
        D_0020A4EC += 0.01666666753590107f;
        if (D_0020A4EC > 1.0f)
            D_0020A4EC = 1.0f;
    } else if (D_0020A4EC > 0.0f) {
        D_0020A4EC -= 0.01666666753590107f;
        if (D_0020A4EC < 0.0f)
            D_0020A4EC = 0.0f;
    }
    if (func_02A730(0)) {
        D_0020A4F0 += 0.01666666753590107f;
        if (D_0020A4F0 > 1.0f)
            D_0020A4F0 = 1.0f;
    } else if (D_0020A4F0 > 0.0f) {
        D_0020A4F0 -= 0.01666666753590107f;
        if (D_0020A4F0 < 0.0f)
            D_0020A4F0 = 0.0f;
    }
    if (func_02A730(1)) {
        D_0020A4F4 += 0.01666666753590107f;
        if (D_0020A4F4 > 1.0f)
            D_0020A4F4 = 1.0f;
    } else if (D_0020A4F4 > 0.0f) {
        D_0020A4F4 -= 0.01666666753590107f;
        if (D_0020A4F4 < 0.0f)
            D_0020A4F4 = 0.0f;
    }
    if (func_02A730(2)) {
        D_0020A4F8 += 0.01666666753590107f;
        if (D_0020A4F8 > 1.0f)
            D_0020A4F8 = 1.0f;
    } else if (D_0020A4F8 > 0.0f) {
        D_0020A4F8 -= 0.01666666753590107f;
        if (D_0020A4F8 < 0.0f)
            D_0020A4F8 = 0.0f;
    }
}
