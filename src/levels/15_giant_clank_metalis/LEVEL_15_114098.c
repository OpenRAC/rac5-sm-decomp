/* LEVEL_15:0x114098 -- stores 1.0f / field_00 into field_6C. */
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
} Rec;

void func_114098(Rec *a0)
{
    a0->f_6C = 1.0f / a0->f_00;
}
