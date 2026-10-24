/* LEVEL_04:0x019F50 -- copies the shared triple into the caller's triple. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V;

extern V D_0024A360;

void func_019F50(V *a0)
{
    a0->f_00 = D_0024A360.f_00;
    a0->f_04 = D_0024A360.f_04;
    a0->f_08 = D_0024A360.f_08;
}
