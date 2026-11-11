/* LEVEL_20.REL:0x08F658 -- resets the global record D_00199D50 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00199D50;

void func_08F658(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00199D50.i0 = 0;
            D_00199D50.f3 = 1.0f;
            D_00199D50.i2 = 0;
            D_00199D50.i1 = 0;
        }
    }
}
