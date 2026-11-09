/* LEVEL_15:0x067C10 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_0014AE6C;
extern float D_0014AE70;
extern float D_0014AE74;
extern float D_0014AE78;
extern int func_023BC8(int i);

void func_067C10(void)
{
    if (func_023BC8(3)) {
        D_0014AE6C += 0.01666666753590107f;
        if (D_0014AE6C > 1.0f)
            D_0014AE6C = 1.0f;
    } else if (D_0014AE6C > 0.0f) {
        D_0014AE6C -= 0.01666666753590107f;
        if (D_0014AE6C < 0.0f)
            D_0014AE6C = 0.0f;
    }
    if (func_023BC8(0)) {
        D_0014AE70 += 0.01666666753590107f;
        if (D_0014AE70 > 1.0f)
            D_0014AE70 = 1.0f;
    } else if (D_0014AE70 > 0.0f) {
        D_0014AE70 -= 0.01666666753590107f;
        if (D_0014AE70 < 0.0f)
            D_0014AE70 = 0.0f;
    }
    if (func_023BC8(1)) {
        D_0014AE74 += 0.01666666753590107f;
        if (D_0014AE74 > 1.0f)
            D_0014AE74 = 1.0f;
    } else if (D_0014AE74 > 0.0f) {
        D_0014AE74 -= 0.01666666753590107f;
        if (D_0014AE74 < 0.0f)
            D_0014AE74 = 0.0f;
    }
    if (func_023BC8(2)) {
        D_0014AE78 += 0.01666666753590107f;
        if (D_0014AE78 > 1.0f)
            D_0014AE78 = 1.0f;
    } else if (D_0014AE78 > 0.0f) {
        D_0014AE78 -= 0.01666666753590107f;
        if (D_0014AE78 < 0.0f)
            D_0014AE78 = 0.0f;
    }
}
