/* LEVEL_20.REL:0x066450 -- resets the global record D_00144BD0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00144BD0;

void func_066450(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00144BD0.i0 = 0;
            D_00144BD0.f3 = 1.0f;
            D_00144BD0.i2 = 0;
            D_00144BD0.i1 = 0;
        }
    }
}
