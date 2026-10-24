/* LEVEL_05.REL:0x1CC058 -- resets the global record D_00390098 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00390098;

void func_1CC058(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00390098.i0 = 0;
            D_00390098.f3 = 1.0f;
            D_00390098.i2 = 0;
            D_00390098.i1 = 0;
        }
    }
}
