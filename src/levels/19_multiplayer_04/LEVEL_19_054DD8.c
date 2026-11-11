/* LEVEL_19.REL:0x054DD8 -- resets the global record D_001EB988 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001EB988;

void func_054DD8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EB988.i0 = 0;
            D_001EB988.f3 = 1.0f;
            D_001EB988.i2 = 0;
            D_001EB988.i1 = 0;
        }
    }
}
