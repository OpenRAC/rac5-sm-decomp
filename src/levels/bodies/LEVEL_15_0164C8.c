/* LEVEL_15:0x0164C8 -- copies the sixteen floats of the argument into the
   global record at 0x177CF0. */
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

extern Rec D_00177CF0;

void func_0164C8(Rec *a0)
{
    D_00177CF0.f_20 = a0->f_20;
    D_00177CF0.f_24 = a0->f_24;
    D_00177CF0.f_28 = a0->f_28;
    D_00177CF0.f_2C = a0->f_2C;
    D_00177CF0.f_00 = a0->f_00;
    D_00177CF0.f_04 = a0->f_04;
    D_00177CF0.f_08 = a0->f_08;
    D_00177CF0.f_0C = a0->f_0C;
    D_00177CF0.f_10 = a0->f_10;
    D_00177CF0.f_14 = a0->f_14;
    D_00177CF0.f_18 = a0->f_18;
    D_00177CF0.f_1C = a0->f_1C;
    D_00177CF0.f_30 = a0->f_30;
    D_00177CF0.f_34 = a0->f_34;
    D_00177CF0.f_38 = a0->f_38;
    D_00177CF0.f_3C = a0->f_3C;
}
