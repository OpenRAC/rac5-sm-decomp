/* LEVEL_15:0x0937C0 -- writes the float argument into the field at 0x14 of
   the record D_23FA58[index] (records of 32 bytes). */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
} Rec;

extern Rec D_23FA58[];

void func_0937C0(int a0, float a1)
{
    D_23FA58[a0].f_14 = a1;
}
