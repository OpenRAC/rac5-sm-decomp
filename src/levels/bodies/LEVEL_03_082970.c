/* LEVEL_03:0x082970 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_0020E86C;
extern float D_0020E870;
extern float D_0020E874;
extern float D_0020E878;
extern int func_02A1E8(int i);

void func_082970(void)
{
    if (func_02A1E8(3)) {
        D_0020E86C += 0.01666666753590107f;
        if (D_0020E86C > 1.0f)
            D_0020E86C = 1.0f;
    } else if (D_0020E86C > 0.0f) {
        D_0020E86C -= 0.01666666753590107f;
        if (D_0020E86C < 0.0f)
            D_0020E86C = 0.0f;
    }
    if (func_02A1E8(0)) {
        D_0020E870 += 0.01666666753590107f;
        if (D_0020E870 > 1.0f)
            D_0020E870 = 1.0f;
    } else if (D_0020E870 > 0.0f) {
        D_0020E870 -= 0.01666666753590107f;
        if (D_0020E870 < 0.0f)
            D_0020E870 = 0.0f;
    }
    if (func_02A1E8(1)) {
        D_0020E874 += 0.01666666753590107f;
        if (D_0020E874 > 1.0f)
            D_0020E874 = 1.0f;
    } else if (D_0020E874 > 0.0f) {
        D_0020E874 -= 0.01666666753590107f;
        if (D_0020E874 < 0.0f)
            D_0020E874 = 0.0f;
    }
    if (func_02A1E8(2)) {
        D_0020E878 += 0.01666666753590107f;
        if (D_0020E878 > 1.0f)
            D_0020E878 = 1.0f;
    } else if (D_0020E878 > 0.0f) {
        D_0020E878 -= 0.01666666753590107f;
        if (D_0020E878 < 0.0f)
            D_0020E878 = 0.0f;
    }
}
