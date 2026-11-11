/* LEVEL_22.REL:0x0A3C48 -- resets the global record D_0027E098 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0027E098;

void func_0A3C48(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027E098.i0 = 0;
            D_0027E098.f3 = 1.0f;
            D_0027E098.i2 = 0;
            D_0027E098.i1 = 0;
        }
    }
}
