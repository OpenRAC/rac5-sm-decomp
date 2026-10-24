/* LEVEL_20:0163B8 -- copies four floats of the caller's record into the
   level's stored record and sets a constant in one of its slots. */
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

extern Rec D_1361E0;

void func_0163B8(Rec *a0)
{
    D_1361E0.f_00 = a0->f_00;
    D_1361E0.f_04 = a0->f_04;
    D_1361E0.f_08 = a0->f_08;
    D_1361E0.f_0C = a0->f_0C;
    D_1361E0.f_70 = 0.6f;
}
