/* LEVEL_18.REL:0x101AF0 -- resets the global record D_0029FA90 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0029FA90;

void func_101AF0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0029FA90.i0 = 0;
            D_0029FA90.f3 = 1.0f;
            D_0029FA90.i2 = 0;
            D_0029FA90.i1 = 0;
        }
    }
}
