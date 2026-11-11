/* LEVEL_23:0x018DA8 -- copies four floats of the caller's record into the
   global record D_1FCFE0, and sets its field at +0x70 to 0.6f. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    float f_24;
    float f_28;
    float f_2C;
    float f_30;
    float f_34;
    float f_38;
    float f_3C;
    float f_40;
    float f_44;
    float f_48;
    float f_4C;
    float f_50;
    float f_54;
    float f_58;
    float f_5C;
    float f_60;
    float f_64;
    float f_68;
    float f_6C;
    float f_70;
} Rec;

extern Rec D_1FCFE0;

void func_018DA8(Rec *a0)
{
    D_1FCFE0.f_00 = a0->f_00;
    D_1FCFE0.f_04 = a0->f_04;
    D_1FCFE0.f_08 = a0->f_08;
    D_1FCFE0.f_0C = a0->f_0C;
    D_1FCFE0.f_70 = 0.6f;
}
