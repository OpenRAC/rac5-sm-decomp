/* LEVEL_17:0x06AD60 -- placement copy of LEVEL_01_079730.c: fills two 12-entry float tables with sine and cosine samples over a fixed step. */
extern float D_001DDD90[];
extern float D_001DDDC0[];
extern float sinf(float x);
extern float cosf(float x);

void func_06AD60(void)
{
    unsigned int i;
    float angle;
    float step;

    angle = 0.0f;
    step = 0.5235987901687622f;
    for (i = 0; i < 12; i++) {
        D_001DDD90[i] = sinf(angle);
        D_001DDDC0[i] = cosf(angle);
        angle = angle + step;
    }
}
