/* LEVEL_01.REL:0x1E07D8 -- resets the global record D_00398D28 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00398D28;

void func_1E07D8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00398D28.i0 = 0;
            D_00398D28.f3 = 1.0f;
            D_00398D28.i2 = 0;
            D_00398D28.i1 = 0;
        }
    }
}
