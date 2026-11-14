/* LEVEL_01:0x079730 -- fills two 12-entry float tables with sine and cosine samples over a fixed step. */
extern float D_0023A3C0[];
extern float D_0023A3F0[];
extern float sinf(float x);
extern float cosf(float x);

void func_079730(void)
{
    unsigned int i;
    float angle;
    float step;

    angle = 0.0f;
    step = 0.5235987901687622f;
    for (i = 0; i < 12; i++) {
        D_0023A3C0[i] = sinf(angle);
        D_0023A3F0[i] = cosf(angle);
        angle = angle + step;
    }
}
