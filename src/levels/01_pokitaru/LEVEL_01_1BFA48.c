/* LEVEL_01.REL:0x1BFA48 -- resets the global record D_00398570 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00398570;

void func_1BFA48(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00398570.i0 = 0;
            D_00398570.f3 = 1.0f;
            D_00398570.i2 = 0;
            D_00398570.i1 = 0;
        }
    }
}
