/* LEVEL_16.REL:0x018870 -- resets the global record D_001DE850 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001DE850;

void func_018870(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DE850.i0 = 0;
            D_001DE850.f3 = 1.0f;
            D_001DE850.i2 = 0;
            D_001DE850.i1 = 0;
        }
    }
}
