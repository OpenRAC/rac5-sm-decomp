/* LEVEL_09.REL:0x12A4A0 -- resets the global record D_00339150 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00339150;

void func_12A4A0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00339150.i0 = 0;
            D_00339150.f3 = 1.0f;
            D_00339150.i2 = 0;
            D_00339150.i1 = 0;
        }
    }
}
