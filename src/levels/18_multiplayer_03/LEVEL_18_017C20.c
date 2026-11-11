typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} Src;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float pad[24];
    float f70;
} Dst;

extern Dst D_001DEBE0;

void func_017C20(Src *a0)
{
    D_001DEBE0.f00 = a0->f00;
    D_001DEBE0.f04 = a0->f04;
    D_001DEBE0.f08 = a0->f08;
    D_001DEBE0.f0C = a0->f0C;
    D_001DEBE0.f70 = 0.6f;
}
