/* LEVEL_07:0x07B920 -- placement copy of LEVEL_01_079730.c: fills two 12-entry float tables with sine and cosine samples over a fixed step. */
extern float D_0024FCC0[];
extern float D_0024FCF0[];
extern float sinf(float x);
extern float cosf(float x);

void func_07B920(void)
{
    unsigned int i;
    float angle;
    float step;

    angle = 0.0f;
    step = 0.5235987901687622f;
    for (i = 0; i < 12; i++) {
        D_0024FCC0[i] = sinf(angle);
        D_0024FCF0[i] = cosf(angle);
        angle = angle + step;
    }
}
