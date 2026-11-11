/* LEVEL_07:0x1A73B0 -- arms the three-word record from the global handle. */
typedef struct {
    int i0;
    float f4;
    int i8;
} Rec;

extern int D_0023AE50;

void func_1A73B0(Rec *a0)
{
    a0->f4 = 5.0f;
    a0->i0 = D_0023AE50;
    a0->i8 = 0;
}
