/* LEVEL_02.REL:0x0D80B0 -- resets the global record D_00343E90 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00343E90;

void func_0D80B0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00343E90.i0 = 0;
            D_00343E90.f3 = 1.0f;
            D_00343E90.i2 = 0;
            D_00343E90.i1 = 0;
        }
    }
}
