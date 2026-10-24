/* LEVEL_04.REL:0x0F0440 -- resets the global record D_00347F08 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00347F08;

void func_0F0440(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00347F08.i0 = 0;
            D_00347F08.f3 = 1.0f;
            D_00347F08.i2 = 0;
            D_00347F08.i1 = 0;
        }
    }
}
