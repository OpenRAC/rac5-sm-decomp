/* LEVEL_19.REL:0x022B40 -- resets the global record D_001DEB08 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001DEB08;

void func_022B40(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DEB08.i0 = 0;
            D_001DEB08.f3 = 1.0f;
            D_001DEB08.i2 = 0;
            D_001DEB08.i1 = 0;
        }
    }
}
