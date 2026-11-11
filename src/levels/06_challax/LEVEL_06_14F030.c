/* LEVEL_06.REL:0x14F030 -- resets the global record D_003806D0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003806D0;

void func_14F030(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003806D0.i0 = 0;
            D_003806D0.f3 = 1.0f;
            D_003806D0.i2 = 0;
            D_003806D0.i1 = 0;
        }
    }
}
