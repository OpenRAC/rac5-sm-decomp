/* LEVEL_17.REL:0x0A9828 -- resets the global record D_00267C50 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00267C50;

void func_0A9828(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00267C50.i0 = 0;
            D_00267C50.f3 = 1.0f;
            D_00267C50.i2 = 0;
            D_00267C50.i1 = 0;
        }
    }
}
