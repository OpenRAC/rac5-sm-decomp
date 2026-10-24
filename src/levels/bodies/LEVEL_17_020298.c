/* LEVEL_17.REL:0x020298 -- resets the global record D_001CFC68 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001CFC68;

void func_020298(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001CFC68.i0 = 0;
            D_001CFC68.f3 = 1.0f;
            D_001CFC68.i2 = 0;
            D_001CFC68.i1 = 0;
        }
    }
}
