typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Quad;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
} Rec;

extern Rec D_001DE8B0;

void func_0186A0(Quad *a0, float x)
{
    D_001DE8B0.f_00 = a0->f_00;
    D_001DE8B0.f_04 = a0->f_04;
    D_001DE8B0.f_08 = a0->f_08;
    D_001DE8B0.f_0C = a0->f_0C;
    D_001DE8B0.f_10 = x;
}
