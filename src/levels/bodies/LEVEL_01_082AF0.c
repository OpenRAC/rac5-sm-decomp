/* LEVEL_01:0x082AF0 -- eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001F61EC;
extern float D_001F61F0;
extern float D_001F61F4;
extern float D_001F61F8;
extern int func_02A3F0(int i);

void func_082AF0(void)
{
    if (func_02A3F0(3)) {
        D_001F61EC += 0.01666666753590107f;
        if (D_001F61EC > 1.0f)
            D_001F61EC = 1.0f;
    } else if (D_001F61EC > 0.0f) {
        D_001F61EC -= 0.01666666753590107f;
        if (D_001F61EC < 0.0f)
            D_001F61EC = 0.0f;
    }
    if (func_02A3F0(0)) {
        D_001F61F0 += 0.01666666753590107f;
        if (D_001F61F0 > 1.0f)
            D_001F61F0 = 1.0f;
    } else if (D_001F61F0 > 0.0f) {
        D_001F61F0 -= 0.01666666753590107f;
        if (D_001F61F0 < 0.0f)
            D_001F61F0 = 0.0f;
    }
    if (func_02A3F0(1)) {
        D_001F61F4 += 0.01666666753590107f;
        if (D_001F61F4 > 1.0f)
            D_001F61F4 = 1.0f;
    } else if (D_001F61F4 > 0.0f) {
        D_001F61F4 -= 0.01666666753590107f;
        if (D_001F61F4 < 0.0f)
            D_001F61F4 = 0.0f;
    }
    if (func_02A3F0(2)) {
        D_001F61F8 += 0.01666666753590107f;
        if (D_001F61F8 > 1.0f)
            D_001F61F8 = 1.0f;
    } else if (D_001F61F8 > 0.0f) {
        D_001F61F8 -= 0.01666666753590107f;
        if (D_001F61F8 < 0.0f)
            D_001F61F8 = 0.0f;
    }
}
