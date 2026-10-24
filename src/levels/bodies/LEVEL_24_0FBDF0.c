/* LEVEL_24.REL:0x0FBDF0 -- resets the global record D_002FD548 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002FD548;

void func_0FBDF0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FD548.i0 = 0;
            D_002FD548.f3 = 1.0f;
            D_002FD548.i2 = 0;
            D_002FD548.i1 = 0;
        }
    }
}
