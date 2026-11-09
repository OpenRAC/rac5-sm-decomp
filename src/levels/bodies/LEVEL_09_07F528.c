/* LEVEL_09:0x07F528 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001DFFEC;
extern float D_001DFFF0;
extern float D_001DFFF4;
extern float D_001DFFF8;
extern int func_029258(int i);

void func_07F528(void)
{
    if (func_029258(3)) {
        D_001DFFEC += 0.01666666753590107f;
        if (D_001DFFEC > 1.0f)
            D_001DFFEC = 1.0f;
    } else if (D_001DFFEC > 0.0f) {
        D_001DFFEC -= 0.01666666753590107f;
        if (D_001DFFEC < 0.0f)
            D_001DFFEC = 0.0f;
    }
    if (func_029258(0)) {
        D_001DFFF0 += 0.01666666753590107f;
        if (D_001DFFF0 > 1.0f)
            D_001DFFF0 = 1.0f;
    } else if (D_001DFFF0 > 0.0f) {
        D_001DFFF0 -= 0.01666666753590107f;
        if (D_001DFFF0 < 0.0f)
            D_001DFFF0 = 0.0f;
    }
    if (func_029258(1)) {
        D_001DFFF4 += 0.01666666753590107f;
        if (D_001DFFF4 > 1.0f)
            D_001DFFF4 = 1.0f;
    } else if (D_001DFFF4 > 0.0f) {
        D_001DFFF4 -= 0.01666666753590107f;
        if (D_001DFFF4 < 0.0f)
            D_001DFFF4 = 0.0f;
    }
    if (func_029258(2)) {
        D_001DFFF8 += 0.01666666753590107f;
        if (D_001DFFF8 > 1.0f)
            D_001DFFF8 = 1.0f;
    } else if (D_001DFFF8 > 0.0f) {
        D_001DFFF8 -= 0.01666666753590107f;
        if (D_001DFFF8 < 0.0f)
            D_001DFFF8 = 0.0f;
    }
}
