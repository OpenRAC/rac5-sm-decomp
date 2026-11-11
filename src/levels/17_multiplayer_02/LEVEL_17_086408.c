/* LEVEL_17.REL:0x086408 -- resets the global record D_0023F8B0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0023F8B0;

void func_086408(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0023F8B0.i0 = 0;
            D_0023F8B0.f3 = 1.0f;
            D_0023F8B0.i2 = 0;
            D_0023F8B0.i1 = 0;
        }
    }
}
