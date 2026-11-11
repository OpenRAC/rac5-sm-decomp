/* LEVEL_19.REL:0x10F528 -- resets the global record D_0029FD20 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0029FD20;

void func_10F528(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0029FD20.i0 = 0;
            D_0029FD20.f3 = 1.0f;
            D_0029FD20.i2 = 0;
            D_0029FD20.i1 = 0;
        }
    }
}
