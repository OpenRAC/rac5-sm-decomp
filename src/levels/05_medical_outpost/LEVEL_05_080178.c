/* LEVEL_05:0x080178 -- placement copy of LEVEL_01_082AF0.c: eases four 0..1 fade values toward their target by 1/60 per call. */
extern float D_001E556C;
extern float D_001E5570;
extern float D_001E5574;
extern float D_001E5578;
extern int func_029068(int i);

void func_080178(void)
{
    if (func_029068(3)) {
        D_001E556C += 0.01666666753590107f;
        if (D_001E556C > 1.0f)
            D_001E556C = 1.0f;
    } else if (D_001E556C > 0.0f) {
        D_001E556C -= 0.01666666753590107f;
        if (D_001E556C < 0.0f)
            D_001E556C = 0.0f;
    }
    if (func_029068(0)) {
        D_001E5570 += 0.01666666753590107f;
        if (D_001E5570 > 1.0f)
            D_001E5570 = 1.0f;
    } else if (D_001E5570 > 0.0f) {
        D_001E5570 -= 0.01666666753590107f;
        if (D_001E5570 < 0.0f)
            D_001E5570 = 0.0f;
    }
    if (func_029068(1)) {
        D_001E5574 += 0.01666666753590107f;
        if (D_001E5574 > 1.0f)
            D_001E5574 = 1.0f;
    } else if (D_001E5574 > 0.0f) {
        D_001E5574 -= 0.01666666753590107f;
        if (D_001E5574 < 0.0f)
            D_001E5574 = 0.0f;
    }
    if (func_029068(2)) {
        D_001E5578 += 0.01666666753590107f;
        if (D_001E5578 > 1.0f)
            D_001E5578 = 1.0f;
    } else if (D_001E5578 > 0.0f) {
        D_001E5578 -= 0.01666666753590107f;
        if (D_001E5578 < 0.0f)
            D_001E5578 = 0.0f;
    }
}
