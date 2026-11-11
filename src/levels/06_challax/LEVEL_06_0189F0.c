/* v2: source order f00,f04,f08,f0C,f70 with padding */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float pad[24];
    float f_70;
} Rec;

extern Rec D_0021C8E0;

void func_0189F0(Rec *a0)
{
    D_0021C8E0.f_00 = a0->f_00;
    D_0021C8E0.f_04 = a0->f_04;
    D_0021C8E0.f_08 = a0->f_08;
    D_0021C8E0.f_0C = a0->f_0C;
    D_0021C8E0.f_70 = 0.6f;
}
