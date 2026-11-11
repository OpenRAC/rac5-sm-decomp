/* LEVEL_16:0x0076C0 -- placement copy of LEVEL_01_007AD8.c: builds two negated float triples and calls a distance test helper. */
extern void *D_0019ACDC;
extern float D_001CCD48[3];
extern float func_0059F0(float, float, float, float, float *, float *);

int func_0076C0(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_0019ACDC + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_001CCD48[0];
    target[1] = -D_001CCD48[1];
    target[2] = -D_001CCD48[2];
    return func_0059F0(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
