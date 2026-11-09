/* LEVEL_24:0x0078E0 -- placement copy of LEVEL_01_007AD8.c: builds two negated float triples and calls a distance test helper. */
extern void *D_001BFED4;
extern float D_001E8C08[3];
extern float func_005C10(float, float, float, float, float *, float *);

int func_0078E0(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_001BFED4 + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_001E8C08[0];
    target[1] = -D_001E8C08[1];
    target[2] = -D_001E8C08[2];
    return func_005C10(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
