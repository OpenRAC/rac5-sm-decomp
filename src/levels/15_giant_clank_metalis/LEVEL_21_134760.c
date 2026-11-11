/* LEVEL_21:0x134760 -- placement copy of LEVEL_15_134760.c. */
extern void *D_002F4F88;
extern char D_00171AF0[];
extern float func_0617E0(void *a, unsigned int b);

float f(int index)
{
    float d = *(float *)(D_00171AF0 + index * 12);

    return func_0617E0(D_002F4F88, index) / d;
}
