/* LEVEL_16:0x0754F8 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001A421C;
extern float D_001A4220;
extern float D_001A4224;
extern float D_001A4228;
extern int func_027E38(int i);

void func_0754F8(void)
{
    if (func_027E38(3)) {
        D_001A421C += 0.01666666753590107f;
        if (D_001A421C > 1.0f)
            D_001A421C = 1.0f;
    } else if (D_001A421C > 0.0f) {
        D_001A421C -= 0.01666666753590107f;
        if (D_001A421C < 0.0f)
            D_001A421C = 0.0f;
    }
    if (func_027E38(0)) {
        D_001A4220 += 0.01666666753590107f;
        if (D_001A4220 > 1.0f)
            D_001A4220 = 1.0f;
    } else if (D_001A4220 > 0.0f) {
        D_001A4220 -= 0.01666666753590107f;
        if (D_001A4220 < 0.0f)
            D_001A4220 = 0.0f;
    }
    if (func_027E38(1)) {
        D_001A4224 += 0.01666666753590107f;
        if (D_001A4224 > 1.0f)
            D_001A4224 = 1.0f;
    } else if (D_001A4224 > 0.0f) {
        D_001A4224 -= 0.01666666753590107f;
        if (D_001A4224 < 0.0f)
            D_001A4224 = 0.0f;
    }
    if (func_027E38(2)) {
        D_001A4228 += 0.01666666753590107f;
        if (D_001A4228 > 1.0f)
            D_001A4228 = 1.0f;
    } else if (D_001A4228 > 0.0f) {
        D_001A4228 -= 0.01666666753590107f;
        if (D_001A4228 < 0.0f)
            D_001A4228 = 0.0f;
    }
}
