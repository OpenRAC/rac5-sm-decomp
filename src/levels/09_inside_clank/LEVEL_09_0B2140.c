/* LEVEL_09.REL:0x0B2140 -- resets the global record D_0030FC48 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0030FC48;

void func_0B2140(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0030FC48.i0 = 0;
            D_0030FC48.f3 = 1.0f;
            D_0030FC48.i2 = 0;
            D_0030FC48.i1 = 0;
        }
    }
}
