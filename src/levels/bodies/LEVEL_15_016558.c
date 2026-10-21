typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
} Rec;

extern Rec D_177D30;

void func_016558(Rec *a0, float f)
{
    D_177D30.f_00 = a0->f_00;
    D_177D30.f_04 = a0->f_04;
    D_177D30.f_08 = a0->f_08;
    D_177D30.f_0C = a0->f_0C;
    D_177D30.f_10 = f;
}
