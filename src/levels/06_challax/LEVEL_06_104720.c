/* LEVEL_06.REL:0x104720 -- resets the global record D_0031E498 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0031E498;

void func_104720(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031E498.i0 = 0;
            D_0031E498.f3 = 1.0f;
            D_0031E498.i2 = 0;
            D_0031E498.i1 = 0;
        }
    }
}
