/* LEVEL_06:0x007AD8 -- placement copy of LEVEL_01_007AD8.c: builds two negated float triples and calls a distance test helper. */
extern void *D_001DE154;
extern float D_00206D08[3];
extern float func_005E08(float, float, float, float, float *, float *);

int func_007AD8(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_001DE154 + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_00206D08[0];
    target[1] = -D_00206D08[1];
    target[2] = -D_00206D08[2];
    return func_005E08(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
