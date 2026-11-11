/* LEVEL_23:0x007AE8 -- placement copy of LEVEL_01_007AD8.c: builds two negated float triples and calls a distance test helper. */
extern void *D_001C2654;
extern float D_001EB008[3];
extern float func_005E18(float, float, float, float, float *, float *);

int func_007AE8(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_001C2654 + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_001EB008[0];
    target[1] = -D_001EB008[1];
    target[2] = -D_001EB008[2];
    return func_005E18(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
