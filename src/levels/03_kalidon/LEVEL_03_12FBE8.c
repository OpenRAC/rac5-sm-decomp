/* LEVEL_03.REL:0x12FBE8 -- resets the global record D_0036CB48 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0036CB48;

void func_12FBE8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0036CB48.i0 = 0;
            D_0036CB48.f3 = 1.0f;
            D_0036CB48.i2 = 0;
            D_0036CB48.i1 = 0;
        }
    }
}
