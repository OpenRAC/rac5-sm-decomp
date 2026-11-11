/* LEVEL_05:0x192120 -- arms the three-word record from the global handle. */
typedef struct {
    int i0;
    float f4;
    int i8;
} Rec;

extern int D_00212108;

void func_192120(Rec *a0)
{
    a0->f4 = 5.0f;
    a0->i0 = D_00212108;
    a0->i8 = 0;
}
