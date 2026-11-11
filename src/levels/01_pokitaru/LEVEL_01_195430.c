/* LEVEL_01:0x195430 -- fills the triple with the shared word, 5.0 and zero. */
typedef struct {
    int f_00;
    float f_04;
    int f_08;
} V;

extern int D_00224870;

void func_195430(V *a0)
{
    a0->f_04 = 5.0f;
    a0->f_00 = D_00224870;
    a0->f_08 = 0;
}
