/* LEVEL_16:0x0185D0 -- copies four floats and stores a constant. */
typedef struct {
    float f0;
    float f1;
    float f2;
    float f3;
    float pad[24];
    float g;
} Rec;

extern Rec D_001DE860;

void func_0185D0(Rec *a0)
{
    D_001DE860.f0 = a0->f0;
    D_001DE860.f1 = a0->f1;
    D_001DE860.f2 = a0->f2;
    D_001DE860.f3 = a0->f3;
    D_001DE860.g = 0.6f;
}
