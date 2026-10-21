/* LEVEL_01:0x0F01A8 -- stores 1.0f / field_00 into field_3C. */
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
} Rec;

void func_0F01A8(Rec *a0)
{
    a0->f_3C = 1.0f / a0->f_00;
}
