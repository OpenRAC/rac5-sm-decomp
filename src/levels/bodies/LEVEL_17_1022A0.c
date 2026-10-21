typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
} S;

extern float func_102248(void);

void func_1022A0(S *s0)
{
    float k = 1.0f / func_102248();

    s0->fC = s0->fC * k;
    s0->f0 = s0->f0 * k;
    s0->f4 = s0->f4 * k;
    s0->f8 = s0->f8 * k;
}
