/* LEVEL_17.REL:0x0BDC20 -- resets the global record D_0026BC58 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0026BC58;

void func_0BDC20(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0026BC58.i0 = 0;
            D_0026BC58.f3 = 1.0f;
            D_0026BC58.i2 = 0;
            D_0026BC58.i1 = 0;
        }
    }
}
