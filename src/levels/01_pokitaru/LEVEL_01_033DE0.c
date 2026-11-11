/* LEVEL_01.REL:0x033DE0 -- resets the global record D_00233070 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00233070;

void func_033DE0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00233070.i0 = 0;
            D_00233070.f3 = 1.0f;
            D_00233070.i2 = 0;
            D_00233070.i1 = 0;
        }
    }
}
