/* LEVEL_24:0x07C6B8 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001C6E6C;
extern float D_001C6E70;
extern float D_001C6E74;
extern float D_001C6E78;
extern int func_027930(int i);

void func_07C6B8(void)
{
    if (func_027930(3)) {
        D_001C6E6C += 0.01666666753590107f;
        if (D_001C6E6C > 1.0f)
            D_001C6E6C = 1.0f;
    } else if (D_001C6E6C > 0.0f) {
        D_001C6E6C -= 0.01666666753590107f;
        if (D_001C6E6C < 0.0f)
            D_001C6E6C = 0.0f;
    }
    if (func_027930(0)) {
        D_001C6E70 += 0.01666666753590107f;
        if (D_001C6E70 > 1.0f)
            D_001C6E70 = 1.0f;
    } else if (D_001C6E70 > 0.0f) {
        D_001C6E70 -= 0.01666666753590107f;
        if (D_001C6E70 < 0.0f)
            D_001C6E70 = 0.0f;
    }
    if (func_027930(1)) {
        D_001C6E74 += 0.01666666753590107f;
        if (D_001C6E74 > 1.0f)
            D_001C6E74 = 1.0f;
    } else if (D_001C6E74 > 0.0f) {
        D_001C6E74 -= 0.01666666753590107f;
        if (D_001C6E74 < 0.0f)
            D_001C6E74 = 0.0f;
    }
    if (func_027930(2)) {
        D_001C6E78 += 0.01666666753590107f;
        if (D_001C6E78 > 1.0f)
            D_001C6E78 = 1.0f;
    } else if (D_001C6E78 > 0.0f) {
        D_001C6E78 -= 0.01666666753590107f;
        if (D_001C6E78 < 0.0f)
            D_001C6E78 = 0.0f;
    }
}
