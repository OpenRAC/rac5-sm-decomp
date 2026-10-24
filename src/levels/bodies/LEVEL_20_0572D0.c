/* LEVEL_20.REL:0x0572D0 -- resets the global record D_00143238 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00143238;

void func_0572D0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00143238.i0 = 0;
            D_00143238.f3 = 1.0f;
            D_00143238.i2 = 0;
            D_00143238.i1 = 0;
        }
    }
}
