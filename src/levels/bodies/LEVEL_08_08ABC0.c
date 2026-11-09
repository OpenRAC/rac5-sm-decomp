/* LEVEL_08:0x08ABC0 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_0023F0AC;
extern float D_0023F0B0;
extern float D_0023F0B4;
extern float D_0023F0B8;
extern int func_02A968(int i);

void func_08ABC0(void)
{
    if (func_02A968(3)) {
        D_0023F0AC += 0.01666666753590107f;
        if (D_0023F0AC > 1.0f)
            D_0023F0AC = 1.0f;
    } else if (D_0023F0AC > 0.0f) {
        D_0023F0AC -= 0.01666666753590107f;
        if (D_0023F0AC < 0.0f)
            D_0023F0AC = 0.0f;
    }
    if (func_02A968(0)) {
        D_0023F0B0 += 0.01666666753590107f;
        if (D_0023F0B0 > 1.0f)
            D_0023F0B0 = 1.0f;
    } else if (D_0023F0B0 > 0.0f) {
        D_0023F0B0 -= 0.01666666753590107f;
        if (D_0023F0B0 < 0.0f)
            D_0023F0B0 = 0.0f;
    }
    if (func_02A968(1)) {
        D_0023F0B4 += 0.01666666753590107f;
        if (D_0023F0B4 > 1.0f)
            D_0023F0B4 = 1.0f;
    } else if (D_0023F0B4 > 0.0f) {
        D_0023F0B4 -= 0.01666666753590107f;
        if (D_0023F0B4 < 0.0f)
            D_0023F0B4 = 0.0f;
    }
    if (func_02A968(2)) {
        D_0023F0B8 += 0.01666666753590107f;
        if (D_0023F0B8 > 1.0f)
            D_0023F0B8 = 1.0f;
    } else if (D_0023F0B8 > 0.0f) {
        D_0023F0B8 -= 0.01666666753590107f;
        if (D_0023F0B8 < 0.0f)
            D_0023F0B8 = 0.0f;
    }
}
