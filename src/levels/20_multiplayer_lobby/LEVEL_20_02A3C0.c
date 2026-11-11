/* LEVEL_20.REL:0x02A3C0 -- resets the global record D_001398F8 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001398F8;

void func_02A3C0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001398F8.i0 = 0;
            D_001398F8.f3 = 1.0f;
            D_001398F8.i2 = 0;
            D_001398F8.i1 = 0;
        }
    }
}
