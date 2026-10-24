/* LEVEL_17.REL:0x10DBD0 -- resets the global record D_00290E78 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00290E78;

void func_10DBD0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00290E78.i0 = 0;
            D_00290E78.f3 = 1.0f;
            D_00290E78.i2 = 0;
            D_00290E78.i1 = 0;
        }
    }
}
