/* LEVEL_19:0x0182D0 -- copies the four floats of the caller's record into the
   level's stored record and sets its distant float slot to 0.6. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    char pad[0x60];
    float f_70;
} Rec;

extern Rec D_1DE9E0;

void func_0182D0(Rec *a0)
{
    D_1DE9E0.f_00 = a0->f_00;
    D_1DE9E0.f_04 = a0->f_04;
    D_1DE9E0.f_08 = a0->f_08;
    D_1DE9E0.f_0C = a0->f_0C;
    D_1DE9E0.f_70 = 0.6f;
}
