/* LEVEL_17:0x017F80 -- variant: 0.70 store after 0.08 in the source list. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    char pad[0x60];
    float f_70;
} Rec;

extern Rec D_001CFB60;

void func_017F80(Rec *a0)
{
    float v70 = 0.6f;
    D_001CFB60.f_00 = a0->f_00;
    D_001CFB60.f_04 = a0->f_04;
    D_001CFB60.f_08 = a0->f_08;
    D_001CFB60.f_0C = a0->f_0C;
    D_001CFB60.f_70 = v70;
}
