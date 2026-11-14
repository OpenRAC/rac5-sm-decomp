/* LEVEL_21:0x05E7D8 -- placement copy of LEVEL_01_079730.c: fills two 12-entry float tables with sine and cosine samples over a fixed step. */
extern float D_00182428[];
extern float D_00182458[];
extern float sinf(float x);
extern float cosf(float x);

void func_05E7D8(void)
{
    unsigned int i;
    float angle;
    float step;

    angle = 0.0f;
    step = 0.5235987901687622f;
    for (i = 0; i < 12; i++) {
        D_00182428[i] = sinf(angle);
        D_00182458[i] = cosf(angle);
        angle = angle + step;
    }
}
