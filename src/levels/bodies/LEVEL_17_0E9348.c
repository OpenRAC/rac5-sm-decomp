/* LEVEL_17.REL:0x0E9348 -- resets the global record D_00270838 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00270838;

void func_0E9348(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00270838.i0 = 0;
            D_00270838.f3 = 1.0f;
            D_00270838.i2 = 0;
            D_00270838.i1 = 0;
        }
    }
}
