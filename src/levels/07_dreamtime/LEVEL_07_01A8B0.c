/* LEVEL_07:0x01A8B0 -- copies a four-float record into the global record
   D_245460 and sets its field at +0x70 to 0.6f. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    char pad[0x60];
    float f_70;
} Rec;

extern Rec D_00245460;

void func_01A8B0(Rec *a0)
{
    D_00245460.f_00 = a0->f_00;
    D_00245460.f_04 = a0->f_04;
    D_00245460.f_08 = a0->f_08;
    D_00245460.f_0C = a0->f_0C;
    D_00245460.f_70 = 0.6f;
}
