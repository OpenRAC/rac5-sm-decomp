/* LEVEL_20.REL:0x0A34D8 -- resets the global record D_0019D738 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0019D738;

void func_0A34D8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019D738.i0 = 0;
            D_0019D738.f3 = 1.0f;
            D_0019D738.i2 = 0;
            D_0019D738.i1 = 0;
        }
    }
}
