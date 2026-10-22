/* LEVEL_08:0x01AB30 -- copies four floats of the caller's record into the
   global D_0027EDE0 and sets its field at +0x70 to 0.6f. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    char pad[0x60];
    float f_70;
} Rec;

extern Rec D_0027EDE0;

void func_01AB30(Rec *a0)
{
    D_0027EDE0.f_00 = a0->f_00;
    D_0027EDE0.f_04 = a0->f_04;
    D_0027EDE0.f_08 = a0->f_08;
    D_0027EDE0.f_0C = a0->f_0C;
    D_0027EDE0.f_70 = 0.6f;
}
