/* LEVEL_05.REL:0x0B33C0 -- resets the global record D_00314378 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00314378;

void func_0B33C0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00314378.i0 = 0;
            D_00314378.f3 = 1.0f;
            D_00314378.i2 = 0;
            D_00314378.i1 = 0;
        }
    }
}
