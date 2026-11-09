/* LEVEL_01:0x007AD8 -- builds two negated float triples and calls a distance test helper. */
extern void *D_001EF254;
extern float D_00217E88[3];
extern float func_005E08(float, float, float, float, float *, float *);

int func_007AD8(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_001EF254 + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_00217E88[0];
    target[1] = -D_00217E88[1];
    target[2] = -D_00217E88[2];
    return func_005E08(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
