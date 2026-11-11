/* LEVEL_03.REL:0x019F50 -- seeds the global effect record from a source
   record and sets its decay to 0.6. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    char pad_10[0x60];
    float f_70;
} Rec;

extern Rec D_24A9E0;

void func_019F50(Rec *a0)
{
    D_24A9E0.f_00 = a0->f_00;
    D_24A9E0.f_04 = a0->f_04;
    D_24A9E0.f_08 = a0->f_08;
    D_24A9E0.f_0C = a0->f_0C;
    D_24A9E0.f_70 = 0.6f;
}
