/* LEVEL_09.REL:0x0D2E48 -- resets the global record D_00314658 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00314658;

void func_0D2E48(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00314658.i0 = 0;
            D_00314658.f3 = 1.0f;
            D_00314658.i2 = 0;
            D_00314658.i1 = 0;
        }
    }
}
