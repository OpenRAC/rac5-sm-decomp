/* LEVEL_01.REL:0x01A2A0 -- copies the four floats of the global vector into
   the caller's record. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec4;

extern Vec4 D_0022FB60;

void func_01A2A0(Vec4 *a0)
{
    a0->f_00 = D_0022FB60.f_00;
    a0->f_04 = D_0022FB60.f_04;
    a0->f_08 = D_0022FB60.f_08;
    a0->f_0C = D_0022FB60.f_0C;
}
