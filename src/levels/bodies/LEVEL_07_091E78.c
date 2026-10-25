/* LEVEL_07.REL:0x091E78 -- resets the global record D_0026FA60 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0026FA60;

void func_091E78(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0026FA60.i0 = 0;
            D_0026FA60.f3 = 1.0f;
            D_0026FA60.i2 = 0;
            D_0026FA60.i1 = 0;
        }
    }
}
