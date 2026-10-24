/* LEVEL_10:0x195900 -- arms the three-word record from the global handle. */
typedef struct {
    int i0;
    float f4;
    int i8;
} Rec;

extern int D_0022D418;

void func_195900(Rec *a0)
{
    a0->f4 = 5.0f;
    a0->i0 = D_0022D418;
    a0->i8 = 0;
}
