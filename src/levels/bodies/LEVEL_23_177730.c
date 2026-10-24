/* LEVEL_23:0x177730 -- arms the three-word record from the global handle. */
typedef struct {
    int i0;
    float f4;
    int i8;
} Rec;

extern int D_001F4248;

void func_177730(Rec *a0)
{
    a0->f4 = 5.0f;
    a0->i0 = D_001F4248;
    a0->i8 = 0;
}
