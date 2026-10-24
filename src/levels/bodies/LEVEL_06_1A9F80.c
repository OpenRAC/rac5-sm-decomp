/* LEVEL_06.REL:0x1A9F80 -- resets the global record D_00385030 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00385030;

void func_1A9F80(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00385030.i0 = 0;
            D_00385030.f3 = 1.0f;
            D_00385030.i2 = 0;
            D_00385030.i1 = 0;
        }
    }
}
