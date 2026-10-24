typedef struct {
    float f0;
    float f1;
    float f2;
    float f3;
    char pad[0x70 - 0x10];
    float f70;
} Rec;

extern Rec D_002172E0;

void func_0195B0(Rec *a0)
{
    D_002172E0.f0 = a0->f0;
    D_002172E0.f1 = a0->f1;
    D_002172E0.f2 = a0->f2;
    D_002172E0.f3 = a0->f3;
    D_002172E0.f70 = 0.6f;
}
