/* LEVEL_02.REL:0x027750 -- resets the global record D_00248400 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00248400;

void func_027750(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00248400.i0 = 0;
            D_00248400.f3 = 1.0f;
            D_00248400.i2 = 0;
            D_00248400.i1 = 0;
        }
    }
}
