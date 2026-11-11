typedef struct {
    float f00;
    float f04;
    float f08;
} S;

extern S D_001CF570;

void func_0A8358(S *a0)
{
    D_001CF570.f00 = a0->f00;
    D_001CF570.f04 = a0->f04;
    D_001CF570.f08 = a0->f08;
}
