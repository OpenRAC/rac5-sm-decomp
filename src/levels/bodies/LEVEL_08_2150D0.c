/* LEVEL_08.REL:0x2150D0 -- resets the global record D_003EB760 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003EB760;

void func_2150D0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EB760.i0 = 0;
            D_003EB760.f3 = 1.0f;
            D_003EB760.i2 = 0;
            D_003EB760.i1 = 0;
        }
    }
}
