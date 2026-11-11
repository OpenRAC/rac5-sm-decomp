/* LEVEL_16.REL:0x057910 -- resets the global record D_001EB818 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001EB818;

void func_057910(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EB818.i0 = 0;
            D_001EB818.f3 = 1.0f;
            D_001EB818.i2 = 0;
            D_001EB818.i1 = 0;
        }
    }
}
