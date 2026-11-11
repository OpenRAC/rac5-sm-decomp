/* LEVEL_10.REL:0x15E1E8 -- resets the global record D_0039EA60 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0039EA60;

void func_15E1E8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039EA60.i0 = 0;
            D_0039EA60.f3 = 1.0f;
            D_0039EA60.i2 = 0;
            D_0039EA60.i1 = 0;
        }
    }
}
