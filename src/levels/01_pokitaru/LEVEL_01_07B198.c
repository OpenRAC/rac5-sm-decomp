/* LEVEL_01.REL:0x07B198 -- resets the global record D_0023A630 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0023A630;

void func_07B198(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0023A630.i0 = 0;
            D_0023A630.f3 = 1.0f;
            D_0023A630.i2 = 0;
            D_0023A630.i1 = 0;
        }
    }
}
