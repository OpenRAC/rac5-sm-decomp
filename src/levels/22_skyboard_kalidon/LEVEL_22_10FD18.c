/* LEVEL_22.REL:0x10FD18 -- resets the global record D_002E7248 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002E7248;

void func_10FD18(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E7248.i0 = 0;
            D_002E7248.f3 = 1.0f;
            D_002E7248.i2 = 0;
            D_002E7248.i1 = 0;
        }
    }
}
