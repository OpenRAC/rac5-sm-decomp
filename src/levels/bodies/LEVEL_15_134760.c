extern int D_002F4F88;
extern char D_00171AF0[];
extern float func_0617E0(int a, int b);

float f(int index)
{
    float d = *(float *)(D_00171AF0 + index * 12);

    return func_0617E0(D_002F4F88, index) / d;
}
