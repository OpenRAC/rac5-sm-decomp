/* LEVEL_18.REL:0x0014B0 -- resets the global record D_001DA950 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001DA950;

void func_0014B0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DA950.i0 = 0;
            D_001DA950.f3 = 1.0f;
            D_001DA950.i2 = 0;
            D_001DA950.i1 = 0;
        }
    }
}
