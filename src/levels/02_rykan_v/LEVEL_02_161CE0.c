/* LEVEL_02.REL:0x161CE0 -- resets the global record D_003AAE08 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003AAE08;

void func_161CE0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AAE08.i0 = 0;
            D_003AAE08.f3 = 1.0f;
            D_003AAE08.i2 = 0;
            D_003AAE08.i1 = 0;
        }
    }
}
