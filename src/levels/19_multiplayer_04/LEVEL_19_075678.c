/* LEVEL_19:0x075678 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001A539C;
extern float D_001A53A0;
extern float D_001A53A4;
extern float D_001A53A8;
extern int func_0279E0(int i);

void func_075678(void)
{
    if (func_0279E0(3)) {
        D_001A539C += 0.01666666753590107f;
        if (D_001A539C > 1.0f)
            D_001A539C = 1.0f;
    } else if (D_001A539C > 0.0f) {
        D_001A539C -= 0.01666666753590107f;
        if (D_001A539C < 0.0f)
            D_001A539C = 0.0f;
    }
    if (func_0279E0(0)) {
        D_001A53A0 += 0.01666666753590107f;
        if (D_001A53A0 > 1.0f)
            D_001A53A0 = 1.0f;
    } else if (D_001A53A0 > 0.0f) {
        D_001A53A0 -= 0.01666666753590107f;
        if (D_001A53A0 < 0.0f)
            D_001A53A0 = 0.0f;
    }
    if (func_0279E0(1)) {
        D_001A53A4 += 0.01666666753590107f;
        if (D_001A53A4 > 1.0f)
            D_001A53A4 = 1.0f;
    } else if (D_001A53A4 > 0.0f) {
        D_001A53A4 -= 0.01666666753590107f;
        if (D_001A53A4 < 0.0f)
            D_001A53A4 = 0.0f;
    }
    if (func_0279E0(2)) {
        D_001A53A8 += 0.01666666753590107f;
        if (D_001A53A8 > 1.0f)
            D_001A53A8 = 1.0f;
    } else if (D_001A53A8 > 0.0f) {
        D_001A53A8 -= 0.01666666753590107f;
        if (D_001A53A8 < 0.0f)
            D_001A53A8 = 0.0f;
    }
}
