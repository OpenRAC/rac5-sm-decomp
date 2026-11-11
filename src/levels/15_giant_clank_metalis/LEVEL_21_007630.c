/* LEVEL_21:0x007630 -- placement copy of LEVEL_01_007AD8.c: builds two negated float triples and calls a distance test helper. */
extern void *D_00143EBC;
extern float D_0016C608[3];
extern float func_005960(float, float, float, float, float *, float *);

int func_007630(void)
{
    float position[3];
    float target[3];
    float scratch[3];
    float *src = (float *)((char *)D_00143EBC + 0x30);

    position[0] = src[0];
    position[1] = src[1];
    position[2] = src[2];
    target[0] = -D_0016C608[0];
    target[1] = -D_0016C608[1];
    target[2] = -D_0016C608[2];
    return func_005960(2.0f, 0.0f, 0.0f, 0.0f, position, target) < 1.999f;
}
