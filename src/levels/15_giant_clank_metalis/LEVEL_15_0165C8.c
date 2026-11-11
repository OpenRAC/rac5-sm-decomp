/* LEVEL_15:0x0165C8 -- placement copy of LEVEL_01_01A2A0.c. */
/* LEVEL_01.REL:0x01A2A0 -- copies the four floats of the global vector into
   the caller's record. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec4;

extern Vec4 D_00177CE0;

void func_0165C8(Vec4 *a0)
{
    a0->f_00 = D_00177CE0.f_00;
    a0->f_04 = D_00177CE0.f_04;
    a0->f_08 = D_00177CE0.f_08;
    a0->f_0C = D_00177CE0.f_0C;
}
