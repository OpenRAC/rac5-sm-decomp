/* LEVEL_20.REL:0x094818 -- resets the global record D_0019A190 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0019A190;

void func_094818(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019A190.i0 = 0;
            D_0019A190.f3 = 1.0f;
            D_0019A190.i2 = 0;
            D_0019A190.i1 = 0;
        }
    }
}
