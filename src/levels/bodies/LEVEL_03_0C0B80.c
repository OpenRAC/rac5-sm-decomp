/* LEVEL_03.REL:0x0C0B80 -- resets the global record D_00343D70 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00343D70;

void func_0C0B80(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00343D70.i0 = 0;
            D_00343D70.f3 = 1.0f;
            D_00343D70.i2 = 0;
            D_00343D70.i1 = 0;
        }
    }
}
