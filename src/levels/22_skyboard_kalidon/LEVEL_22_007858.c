/* LEVEL_22:0x007858 -- placement copy of LEVEL_01_007AD8.c: builds two negated float triples and calls a distance test helper. */
extern void *D_0014E5D4;
extern float D_00175308[3];
extern float func_005B88(float, float, float, float, float *, float *);

int func_007858(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_0014E5D4 + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_00175308[0];
    target[1] = -D_00175308[1];
    target[2] = -D_00175308[2];
    return func_005B88(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
