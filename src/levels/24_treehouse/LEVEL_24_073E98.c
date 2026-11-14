/* LEVEL_24:0x073E98 -- placement copy of LEVEL_01_079730.c: fills two 12-entry float tables with sine and cosine samples over a fixed step. */
extern float D_002062C0[];
extern float D_002062F0[];
extern float sinf(float x);
extern float cosf(float x);

void func_073E98(void)
{
    unsigned int i;
    float angle;
    float step;

    angle = 0.0f;
    step = 0.5235987901687622f;
    for (i = 0; i < 12; i++) {
        D_002062C0[i] = sinf(angle);
        D_002062F0[i] = cosf(angle);
        angle = angle + step;
    }
}
