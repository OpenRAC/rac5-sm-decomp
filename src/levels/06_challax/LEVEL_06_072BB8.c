/* LEVEL_06:0x072BB8 -- placement copy of LEVEL_01_079730.c: fills two 12-entry float tables with sine and cosine samples over a fixed step. */
extern float D_00227140[];
extern float D_00227170[];
extern float sinf(float x);
extern float cosf(float x);

void func_072BB8(void)
{
    unsigned int i;
    float angle;
    float step;

    angle = 0.0f;
    step = 0.5235987901687622f;
    for (i = 0; i < 12; i++) {
        D_00227140[i] = sinf(angle);
        D_00227170[i] = cosf(angle);
        angle = angle + step;
    }
}
