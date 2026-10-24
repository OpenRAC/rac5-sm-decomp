/* LEVEL_01:0x01A140 -- copies the four leading floats of the argument into
   the global record and stamps 0.6 into its far field. */
typedef struct {
    float f0;
    float f1;
    float f2;
    float f3;
    char pad[0x70 - 0x10];
    float f70;
} Rec;

extern Rec D_0022FB60;

void func_01A140(Rec *a0)
{
    D_0022FB60.f0 = a0->f0;
    D_0022FB60.f1 = a0->f1;
    D_0022FB60.f2 = a0->f2;
    D_0022FB60.f3 = a0->f3;
    D_0022FB60.f70 = 0.6f;
}
