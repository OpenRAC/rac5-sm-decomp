typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
} S;

extern S D_0024AA30;

void func_01A020(S *a0, float f12)
{
    D_0024AA30.f00 = a0->f00;
    D_0024AA30.f04 = a0->f04;
    D_0024AA30.f08 = a0->f08;
    D_0024AA30.f0C = a0->f0C;
    D_0024AA30.f10 = f12;
}
